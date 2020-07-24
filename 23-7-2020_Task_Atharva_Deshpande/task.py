
import cv2
import numpy as np

text=cv2.imread(r'text.jpg')

gray=cv2.cvtColor(text,cv2.COLOR_BGR2GRAY)
hsv = cv2.cvtColor(text,cv2.COLOR_RGB2HSV)

img = cv2.resize(text,(300,300))
cv2.imshow("Real", img)

print("Old shape",text.shape)
print("Old size",text.size)
print("New shape",img.shape)
print("New size",img.size)

ret,thresh=cv2.threshold(gray,155,255,cv2.THRESH_BINARY) 
cv2.imshow("Thresh Binary", thresh)

ret,thresh1=cv2.threshold(gray,130,255,cv2.THRESH_BINARY_INV)  
cv2.imshow("Binary Invet", thresh1)

gaus=cv2.adaptiveThreshold(gray,255,cv2.ADAPTIVE_THRESH_GAUSSIAN_C,cv2.THRESH_BINARY,115,1)
cv2.imshow("Thresh Adaptive Gaussian", gaus)

mean=cv2.adaptiveThreshold(gray,255,cv2.ADAPTIVE_THRESH_MEAN_C,cv2.THRESH_BINARY,115,1)
cv2.imshow("Thresh Adaptive Mean", mean)


cv2.imwrite("Gray.jpg",gray)
cv2.imwrite("HSV.jpg",hsv)
cv2.imwrite("Thresh_Binary.jpg", thresh)
cv2.imwrite("Thresh_Binary_Invet.jpg", thresh1)
cv2.imwrite("Thresh_Adaptive_Gaussian.jpg", gaus)
cv2.imwrite("Thresh_Adaptive_Mean.jpg", mean)






cv2.waitKey(0)
cv2.destroyAllWindows()