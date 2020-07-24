import cv2
import numpy as np

original = cv2.imread("C:/Setup files/pycharm files/image/daisy_flower.jpg")
res = cv2.resize(original,(640,400))
res1 = cv2.resize(original,(640,400))

img = cv2.rectangle(res,(22,303),(150,323),(255,255,255))
img = cv2.line(img,(30,323),(42,385),(255,255,255))
img = cv2.line(img,(140,323),(128,385),(255,255,255))
img = cv2.line(img,(42,385),(128,385),(255,255,255))
font = cv2.FONT_HERSHEY_SCRIPT_SIMPLEX
cv2.putText(img,'T R F',(30,85),font,2,(255,255,255),2)


bgrl = np.array([90,0,120],np.uint8)
bgrh = np.array([215,255,255],np.uint8)
mask = cv2.inRange(res1,bgrl,bgrh)


kernel = np.array(([0,0,0],[0,1,0],[0,0,0]),np.uint8)
filt = cv2.filter2D(mask,-1,kernel)
avr = cv2.blur(mask,(5,5))
gau = cv2.GaussianBlur(mask,(5,5),0)
median = cv2.medianBlur(mask,5)
bilat = cv2.bilateralFilter(mask,3,75,75)

cv2.imshow("Drawm",img)
cv2.imshow("Masked",mask)
cv2.imshow("Blurred",filt)
cv2.imshow("Average",avr)
cv2.imshow("Gaussian",gau)
cv2.imshow("Median",median)
cv2.imshow("Bilateral",bilat)


cv2.imwrite("C:/Setup files/pycharm files/filt_flower.jpg",filt)
cv2.imwrite("C:/Setup files/pycharm files/avr_flower.jpg",avr)
cv2.imwrite("C:/Setup files/pycharm files/gau_flower.jpg",gau)
cv2.imwrite("C:/Setup files/pycharm files/median_flower.jpg",median)
cv2.imwrite("C:/Setup files/pycharm files/bilat_flower.jpg",bilat)


cv2.waitKey(0)
cv2.destroyAllWindows()


