import cv2
import numpy as np

img = cv2.imread("incrivel.jpg")
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

thresh = cv2.adaptiveThreshold(blur,200,cv2.ADAPTIVE_THRESH_GAUSSIAN_C,cv2.THRESH_BINARY_INV,23,3)
cv2.imshow("Uau", thresh)
cnts= cv2.findContours(thresh, cv2.RETR_EXTERNAL,cv2.CHAIN_APPROX_SIMPLE)
cnts = cnts[0] if len(cnts) == 2 else cnts[1]
for c in cnts:
    area = cv2.contourArea(c)
    if area > 10:
        cv2.drawContours(img, [c], -1, (0,0,0), 2)
        x0, y0, largura, altura = cv2.boundingRect(c)
        

cv2.waitKey()
cv2.destroyAllWindows()
