import cv2
import numpy as np
imagem = cv2.imread("eobrad.jpg")
gray = cv2.cvtColor(imagem, cv2.COLOR_BGR2GRAY)
cv2.imshow("imagem", gray)
cv2.waitKey()
cv2.destroyWindow('image')
