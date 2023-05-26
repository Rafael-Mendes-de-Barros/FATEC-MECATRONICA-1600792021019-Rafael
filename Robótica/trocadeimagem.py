import cv2
import numpy as np

def replace_background(image_path, replacement_color):
    # Carrega a imagem
    image = cv2.imread(image_path)

    # Define a cor de fundo a ser substituída
    lower_color = np.array([0, 0, 0])  
    upper_color = np.array([10, 10, 10])  

    # Cria uma máscara para a cor de fundo
    mask = cv2.inRange(image, lower_color, upper_color)

    # Substitui a cor de fundo pela cor de substituição
    image[mask != 0] = replacement_color

    # Mostra a imagem resultante
    cv2.imshow("Imagem com Cor de Fundo Substituída", image)
    cv2.waitKey(0)
    cv2.destroyAllWindows()

# Caminho para a imagem que deseja substituir a cor de fundo
image_path = "img_A3.png"

# Define a cor de substituição (verde, por exemplo)
replacement_color = (30, 230, 181)  # Cor verde - altere os valores conforme necessário

# Chama a função para substituir a cor de fundo
replace_background(image_path, replacement_color)
