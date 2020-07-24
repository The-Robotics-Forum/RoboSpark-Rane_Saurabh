import cv2

text1=cv2.imread('text.jpg',3)

gray1=cv2.cvtColor(text1,cv2.COLOR_BGR2GRAY)
hsv1 = cv2.cvtColor(text1,cv2.COLOR_RGB2HSV)

'''cv2.imshow("Real",text1)
cv2.imshow("gray", gray1)
cv2.imshow("HSV",hsv1)'''

img = cv2.resize(text1,(300,300))
cv2.imshow("Real Resized", img)

print("Old shape",text1.shape)
print("Old size",text1.size)
print("New shape",img.shape)
print("New size",img.size)

ret,thresh1=cv2.threshold(gray1,155,255,cv2.THRESH_BINARY) #Applying binary method
cv2.imshow("Thresh Binary", thresh1)

ret,thresh2=cv2.threshold(gray1,130,255,cv2.THRESH_BINARY_INV)  #applying binary invet method
cv2.imshow("Thresh Binary Invet", thresh2)

gaus=cv2.adaptiveThreshold(gray1,255,cv2.ADAPTIVE_THRESH_GAUSSIAN_C,cv2.THRESH_BINARY,115,1)
cv2.imshow("Thresh Adaptive Gaussian", gaus)

mean=cv2.adaptiveThreshold(gray1,255,cv2.ADAPTIVE_THRESH_MEAN_C,cv2.THRESH_BINARY,115,1)
cv2.imshow("Thresh Adaptive Mean", mean)


cv2.imwrite("Gray.jpg",gray1)
cv2.imwrite("HSV.jpg",hsv1)
cv2.imwrite("Thresh_Binary.jpg", thresh1)
cv2.imwrite("Thresh_Binary_Invet.jpg", thresh2)
cv2.imwrite("Thresh_Adaptive_Gaussian.jpg", gaus)
cv2.imwrite("Thresh_Adaptive_Mean.jpg", mean)






cv2.waitKey(0)
cv2.destroyAllWindows()