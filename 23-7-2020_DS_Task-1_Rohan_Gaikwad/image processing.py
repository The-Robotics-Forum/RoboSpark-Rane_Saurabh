import cv2
img  = cv2.imread("C:/Setup files/pycharm files/image/text.jpg")
print("Original Size Image has shape",end=" ")
print(img.shape,end=" ")
print("and size ",end="")
print(img.size)
#size = height*width*channels

grey_img = cv2.cvtColor(img,cv2.COLOR_BGR2GRAY)
grey_img = cv2.resize(grey_img,(500,500))
cv2.imshow("Grey Image",grey_img)
cv2.imwrite("C:/Setup files/pycharm files/image/grey.jpg",grey_img)

cv2.waitKey(1400)
cv2.destroyWindow("Grey Image")


print("Resized image has shape ",end=" ")
print(grey_img.shape,end=" ")
print("and size as ",end=" ")
print(grey_img.size)


hsv_img = cv2.cvtColor(img,cv2.COLOR_BGR2HSV)
hsv_img = cv2.resize(grey_img,(500,500))
cv2.imshow("HSV Image",hsv_img)
cv2.imwrite("C:/Setup files/pycharm files/image/hsv.jpg",hsv_img)


cv2.waitKey(1400)
cv2.destroyWindow("HSV Image")


#manual Thresholding on grey_image

ret , thresh_man_bin = cv2.threshold(grey_img,120,255,cv2.THRESH_BINARY)
cv2.imshow("Thresh_man_bin Image",thresh_man_bin)
cv2.imwrite("C:/Setup files/pycharm files/image/Thresh_man_bin.jpg",thresh_man_bin)
cv2.waitKey(1400)
cv2.destroyWindow("Thresh_man_bin Image")


ret , thresh_man_inv_bin = cv2.threshold(grey_img,120,255,cv2.THRESH_BINARY_INV)
cv2.imshow("Thresh_man_inv_bin Image",thresh_man_inv_bin)
cv2.imwrite("C:/Setup files/pycharm files/image/Thresh_man_inv_bin.jpg",thresh_man_inv_bin)
cv2.waitKey(1400)
cv2.destroyWindow("Thresh_man_inv_bin Image")



#adaptive thresholding on grey image
thresh_adp_bin = cv2.adaptiveThreshold(grey_img,255,cv2.ADAPTIVE_THRESH_MEAN_C,cv2.THRESH_BINARY,3,1)
cv2.imshow("Thresh_adp_bin Image",thresh_man_bin)
cv2.imwrite("C:/Setup files/pycharm files/image/Thresh_adp_bin.jpg",thresh_adp_bin)
cv2.waitKey(1400)
cv2.destroyWindow("Thresh_adp_bin Image")



thresh_adp_inv_bin = cv2.adaptiveThreshold(grey_img,255,cv2.ADAPTIVE_THRESH_MEAN_C,cv2.THRESH_BINARY_INV,3,1)
cv2.imshow("Thresh_adp_inv_bin Image",thresh_adp_inv_bin)
cv2.imwrite("C:/Setup files/pycharm files/image/Thresh_adp_inv_bin.jpg",thresh_adp_inv_bin)
cv2.waitKey(1400)
cv2.destroyWindow("Thresh_adp_inv_bin Image")

