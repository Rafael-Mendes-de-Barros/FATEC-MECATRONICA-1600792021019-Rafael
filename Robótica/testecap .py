import cv2
import numpy as np

cap = cv2.VideoCapture('http://192.168.137.246:4747/video')

cap.set(cv2.CAP_PROP_FRAME_WIDTH, 640)
cap.set(cv2.CAP_PROP_FRAME_HEIGHT, 480)
cap.set(cv2.CAP_PROP_FPS, 30)

ret, frame1 = cap.read()
frame1_gray = cv2.cvtColor(frame1, cv2.COLOR_BGR2GRAY)
frame1_blur = cv2.GaussianBlur(frame1_gray, (21, 21), 0)

while True:
    # Capture o próximo quadro
    ret, frame2 = cap.read()

    # Converta o quadro para escala de cinza e aplique um desfoque gaussiano
    frame2_gray = cv2.cvtColor(frame2, cv2.COLOR_BGR2GRAY)
    frame2_blur = cv2.GaussianBlur(frame2_gray, (21, 21), 0)

    # Calcule a diferença absoluta entre o primeiro quadro e o quadro atual
    frame_diff = cv2.absdiff(frame1_blur, frame2_blur)

    # Aplique um limiar para eliminar o ruído
    thresh = cv2.threshold(frame_diff, 20, 255, cv2.THRESH_BINARY)[1]

    # Dilate a imagem para preencher buracos
    dilate = cv2.dilate(thresh, None, iterations=2)

    # Encontre os contornos dos objetos na imagem dilatada
    contours, hierarchy = cv2.findContours(dilate, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)

    # Desenhe os contornos dos objetos na imagem original
    for contour in contours:
        if cv2.contourArea(contour) < 5000:
            continue
        (x, y, w, h) = cv2.boundingRect(contour)
        cv2.rectangle(frame2, (x, y), (x + w, y + h), (0, 255, 0), 2)

        # Determine a direção do movimento
        direction = ''
        if x < 200:
            direction = 'left'
        elif x > 440:
            direction = 'right'
        elif y < 140:
            direction = 'up'
        elif y > 340:
            direction = 'down'

        # Mostrar a direção do movimento dentro do contorno do objeto
        cv2.putText(frame2, direction, (x, y-10), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 255, 0), 2)

    # Mostre a imagem resultante
    cv2.imshow("Movement Detection", frame2)

    # Atualize o quadro de referência
    frame1_blur = frame2_blur.copy()
