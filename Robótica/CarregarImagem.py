import cv2
import numpy as np

imagem = cv2.imread('eobrad.jpg')
altura, largura, bytesPorPixel = np.shape(imagem)
img = np.zeros([altura,largura,3], np.uint8)

for py in range(0, altura):
    for px in range(0, largura):
        img[py][px][0] = imagem[py][px][0] # cor azul
        img[py][px][1] = imagem[py][px][0] # cor verde
        img[py][px][2] = imagem[py][px][0] # cor vermelho

cv2.imshow("imagem", img)
cv2.waitKey()
cv2.destroyWindow('image')
