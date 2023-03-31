import cv2

# Carrega a imagem
imagem = cv2.imread('caminho_da_imagem')

# Filtra apenas pixels pretos na imagem
mascara = cv2.inRange(imagem, (0,0,0), (20,20,20))

# Encontra o contorno do círculo
contornos, hierarquia = cv2.findContours(mascara, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
contorno_circulo = max(contornos, key=cv2.contourArea)

# Obtem o retângulo envolvente do contorno
x, y, largura, altura = cv2.boundingRect(contorno_circulo)

# Calcula a posição do centro do círculo
centro_x, centro_y = x + largura//2, y + altura//2

# Imprime a largura, altura e posição do centro do círculo
print("Largura:", largura)
print("Altura:", altura)
print("Posição do centro: ({}, {})".format(centro_x, centro_y))
