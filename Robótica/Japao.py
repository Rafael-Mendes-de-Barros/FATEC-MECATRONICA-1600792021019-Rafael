import cv2
import numpy as np

# Define as dimensões da imagem (altura x largura)
altura = 600
largura = int(altura * 2 / 3)

# Cria uma matriz de zeros com as dimensões definidas e 3 canais de cor (BGR)
imagem = np.zeros((altura, largura, 3), np.uint8)
imagem.fill(255) #Define todos os pixels como brancos

# Define as cores a serem utilizadas na imagem
branco = (255, 255, 255)  # BGR: 255, 255, 255
vermelho = (0, 0, 255)    # BGR: 0, 0, 255

# Define o centro e o raio do círculo da bandeira do Japão
centro = (int(largura / 2), int(altura / 2))
raio = int(altura / 4)

# Desenha o círculo vermelho na imagem
cv2.circle(imagem, centro, raio, vermelho, -1)

# Salva a imagem em um arquivo com o nome "bandeira_japao.png"
cv2.imwrite('bandeira_japao.png', imagem)

# Exibe a imagem em uma janela de exibição
cv2.imshow('Bandeira do Japão', imagem)

# Aguarda o pressionamento de uma tecla e fecha todas as janelas abertas pelo OpenCV
cv2.waitKey(0)
cv2.destroyAllWindows()
