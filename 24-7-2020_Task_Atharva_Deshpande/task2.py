import cv2
import numpy as np

original= cv2.imread(r'C:\Users\Atharva\Downloads\rose_flower.jpg')

res = cv2.resize(original,(640,400))
res1 = cv2.resize(original,(640,400))




bgrl = np.array([90,0,120],np.uint8)
bgrh = np.array([215,255,255],np.uint8)
mask = cv2.inRange(res1,bgrl,bgrh)


kernel = np.array(([0,0,0],[0,1,0],[0,0,0]),np.uint8)
filt = cv2.filter2D(mask,-1,kernel)
avr = cv2.blur(mask,(5,5))
gau = cv2.GaussianBlur(mask,(5,5),0)
median = cv2.medianBlur(mask,5)
bilat = cv2.bilateralFilter(mask,3,75,75)

cv2.imshow("Masked",mask)
cv2.imshow("Blurred",filt)
cv2.imshow("Average",avr)
cv2.imshow("Gaussian",gau)
cv2.imshow("Median",median)
cv2.imshow("Bilateral",bilat)

cv2.imwrite("Masked.jpg",mask)
cv2.imwrite("Blurred.jpg",filt)
cv2.imwrite("Average.jpg",avr)
cv2.imwrite("Gaussian.jpg",gau)
cv2.imwrite("Median.jpg",median)
cv2.imwrite("Bilateral.jpg",bilat)

pot_i = cv2.imread(r'C:\Users\Atharva\Downloads\yellow_flower.jpg')
pot = cv2.resize(pot_i,(400,600))
pot = cv2.ellipse(pot,(200,480),(100,30),180,0,360,(255,255,255),10)
pot = cv2.ellipse(pot,(100,520),(40,25),270,0,180,(255,255,255),10)
pot = cv2.ellipse(pot,(300,520),(40,25),90,0,180,(255,255,255),10)
pot = cv2.ellipse(pot,(100,580),(25,10),90,0,180,(255,255,255),10)
pot = cv2.ellipse(pot,(300,580),(25,10),270,0,180,(255,255,255),10)
font=cv2.FONT_HERSHEY_COMPLEX
pot = cv2.putText(pot,"Yellow Flower",(0,50),font,1,(255,255,255),1)
cv2.imshow("Flower_pot",pot)
cv2.imwrite("flower_pot.jpg",pot)
cv2.waitKey(0)
cv2.destroyAllWindows() 