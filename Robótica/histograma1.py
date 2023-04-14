import cv2
import numpy as np
from matplotlib import pyplot as plt

altura = 10
largura = 10
img = np.zeros([altura,largura,3])
for py in range(0,altura):
    for px in range(0,largura):
        if ( px==py ):
            img[py][px][0] = 0 # color Blue
            img[py][px][1] = 0 # color Green
            img[py][px][2] = 0 # color Red
        else:
            img[py][px][0] = 0 # color Blue
            img[py][px][1] = 255 # color Green
            img[py][px][2] = 0 # color Red

cv2.imwrite('color_img.png', img)
imagem = cv2.imread('color_img.png')
plt.hist(imagem.ravel(),256,[0,256]);
plt.show()
