import cv2
import numpy as np

# Obter a largura e altura da imagem do usuário, validando que sejam pelo menos 100 pixels
while True:
    try:
        largura = int(input("Digite a largura da imagem (pelo menos 100 pixels): "))
        altura = int(input("Digite a altura da imagem (pelo menos 100 pixels): "))
        if largura >= 100 and altura >= 100:
            break
        else:
            print("Largura e altura devem ser pelo menos 100 pixels.")
    except ValueError:
        print("Entrada inválida. Digite um número inteiro para a largura e altura.")

# Criar uma imagem azul com a largura e altura definidas pelo usuário
blue_image = np.zeros((altura, largura, 3), dtype=np.uint8)
blue_image[:] = (255, 0, 0)

# Desenhar uma moldura vermelha na imagem
border_thickness = 50
border_color = (0, 0, 255)
cv2.rectangle(blue_image, (0, 0), (largura-1, altura-1), border_color, border_thickness)

# Exibir a imagem
cv2.imshow("Imagem", blue_image)
cv2.waitKey(0)
cv2.destroyAllWindows()
