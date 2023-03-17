import cv2
import numpy as np

centro = (200, 200)
raio = 100

theta = np.linspace(0, 2*np.pi, 100)
x = raio*np.cos(theta) + centro[0]
y = raio*np.sin(theta) + centro[1]

imagem = np.zeros((400, 400, 3), dtype=np.uint8)

cv2.circle(imagem, centro, raio, (255, 0, 0), 2)

cv2.imshow('Circulo', imagem)
cv2.waitKey(0)
cv2.destroyAllWindows()
