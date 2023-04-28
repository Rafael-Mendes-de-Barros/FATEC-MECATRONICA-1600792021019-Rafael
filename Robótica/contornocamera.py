from ast import Break
import cv2
import numpy as np

chave = 1
cap = cv2.VideoCapture('http://192.168.137.2:4747/video')

while cap.isOpened():
    ret, imagem = cap.read()
    if not ret:
        Break

    cv2.imshow('Imagem', imagem) #Note cv2_imshow, not cv2.imshow
    gray = cv2.cvtColor(imagem, cv2.COLOR_BGR2GRAY)
    cv2.imshow('gray', gray)
    altura, largura = np.shape(gray)
    print("Gray altura: ", altura, "Gray largura: ", largura)

    kernel = np.ones((9,9), np.float32)/81;
    filter2D = cv2.filter2D(gray, -1, kernel)

    blur = cv2.blur(gray, (5,5))

    gaussian = cv2.GaussianBlur(gray, (3,3), 0)

    thresh = cv2.adaptiveThreshold(blur, 200, cv2.ADAPTIVE_THRESH_GAUSSIAN_C, cv2.THRESH_BINARY_INV, 23, 3)
    cv2.imshow("thres", thresh)
    cnts = cv2.findContours(thresh, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
    cnts = cnts[0] if len(cnts) == 2 else cnts[1]

    for c in cnts:
        area = cv2.contourArea(c)
        if area > 10:
            cv2.drawContours(imagem, [c], -1, (0,255,0), 2)
            x0, y0, largura, altura = cv2.boundingRect(c)

    cv2.imshow('jdfrivhjdfuih', imagem)
    key = cv2.waitKey(3)
    if key == ord('q'):
     break
    
cv2.destroyAllWindows()
cap.release()
