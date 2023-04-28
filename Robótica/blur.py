import cv2
import numpy as np

img = cv2.imread("mbappeVerdadeiro.jpg")
cv2.imshow("original", img)
altura, largura, bytesPorPixel = np.shape(img)
print("Original Altura: ", altura, "Largura: ", largura)

gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
cv2.imshow("Gray", gray)
altura, largura = np.shape(gray)
print ("Gray Altura: ", altura, "Largura: ", largura)

kernel = np.ones((9,9), np.float32)/81;
filter2D = cv2.filter2D(gray, -1, kernel)
cv2.imshow("Kernel", filter2D)

blur = cv2.blur(gray, (5,5))
cv2.imshow("Blur", blur)

gaussian = cv2.GaussianBlur(gray, (3,3), 0)
cv2.imshow("Gaussian", gaussian)

cv2.waitKey()
cv2.destroyAllWindows()
