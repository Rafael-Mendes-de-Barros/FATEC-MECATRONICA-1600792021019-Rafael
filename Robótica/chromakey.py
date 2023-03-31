import cv2
import numpy as np

# Carrega a imagem A com fundo em chroma key verde
img_a = cv2.imread("imagem_a.png", cv2.IMREAD_UNCHANGED)

# Separa os canais de cores da imagem A
b, g, r, a = cv2.split(img_a)

# Cria uma máscara com os pixels verdes da imagem A
mask = np.zeros((img_a.shape[0], img_a.shape[1]), dtype=np.uint8)
mask[(g > 150) & (r < 100)] = 255

# Inverte a máscara para selecionar os pixels que não são verdes
inv_mask = cv2.bitwise_not(mask)

# Carrega a imagem B para substituir o fundo verde da imagem A
img_b = cv2.imread("imagem_b.png", cv2.IMREAD_UNCHANGED)

# Redimensiona a imagem B para as dimensões da imagem A
img_b = cv2.resize(img_b, (img_a.shape[1], img_a.shape[0]))

# Aplica a máscara na imagem B para manter apenas os pixels que não são verdes
img_b = cv2.bitwise_and(img_b, img_b, mask=inv_mask)

# Aplica a máscara na imagem A para manter apenas os pixels que são verdes
img_a = cv2.bitwise_and(img_a, img_a, mask=mask)

# Combina as imagens A e B com fundo transparente em uma única imagem
img_c = cv2.add(img_a, img_b)

# Salva a imagem C com fundo transparente
cv2.imwrite("imagem_c.png", img_c)
