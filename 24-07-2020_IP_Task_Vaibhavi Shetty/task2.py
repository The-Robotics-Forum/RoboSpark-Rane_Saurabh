import cv2
import numpy as np

original = cv2.imread('rose_flower.jpg')
print(original.shape)

res = cv2.resize(original,(480,600))
print(res.shape)
cv2.imshow("Original", res)
hsv=cv2.cvtColor(res,cv2.COLOR_BGR2HSV)

#masking
bgrl = np.array([120 , 0, 90], np.uint8)
bgrh = np.array([215, 255, 255], np.uint8)
mask1 = cv2.inRange(res, bgrl, bgrh)
mask2 = cv2.inRange(hsv, bgrl, bgrh)

kernel = np.array(([13, -2, 16],[15, 17, 18],[12, 14, 18]), np.uint8)

#filter2D
blurred = cv2.filter2D(res, 3, kernel)

#averaging
avg = cv2.blur(res, (5,5))

#Gaussian blur
gaus_blur = cv2.GaussianBlur(res, (5,5), 0)

#median blur
med_blur = cv2.medianBlur(res, 7)

#bilateral
bilateral = cv2.bilateralFilter(res, 15, 500, 500)

font = cv2.FONT_HERSHEY_SCRIPT_COMPLEX
cv2.putText(res,'Roses',(300,50),font,2,(255,255,255),3)

pts = np.array([[10,500],[50,600],[160,600],[200,500]],np.int32)
pts = pts.reshape(-1,1,2)
cv2.polylines(res, [pts], True, (30,105,250) )
cv2.fillPoly(res,[pts], (41,39,90) )


cv2.imwrite("Mask Original.jpg",mask1)
cv2.imwrite("Mask HSV.jpg",mask2)
cv2.imwrite("Filter2D.jpg",blurred)
cv2.imwrite("Image.jpg",res)
cv2.imwrite("Averaging.jpg",avg)
cv2.imwrite("Gaussian blur.jpg",gaus_blur)
cv2.imwrite("Median Blur.jpg",med_blur)
cv2.imwrite("Bilateral.jpg",bilateral)


cv2.imshow("Or_text", res)
cv2.imshow("Masked original", mask1)
cv2.imshow("Masked HSV", mask2)
cv2.imshow("blurred", blurred)
cv2.imshow("averaging", avg)
cv2.imshow("gaussian blur", gaus_blur)
cv2.imshow("median blur normal", med_blur)
cv2.imshow("bilateral", bilateral)

cv2.waitKey(0)
cv2.destroyAllWindows()