import cv2

# Inicia a captura de vídeo
cap = cv2.VideoCapture('http://192.168.137.2:4747/video')

while True:
    # Lê um frame do vídeo
    ret, frame = cap.read()
    
    # Converte o frame para tons de cinza
    gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
    
    # Aplica uma limiarização adaptativa para segmentar o plano
    thresh = cv2.adaptiveThreshold(gray, 255, cv2.ADAPTIVE_THRESH_MEAN_C,
                                   cv2.THRESH_BINARY_INV, 11, 2)
    
    # Encontra os contornos na imagem segmentada
    contours, hierarchy = cv2.findContours(thresh, cv2.RETR_EXTERNAL,
                                           cv2.CHAIN_APPROX_SIMPLE)
    
    # Inicializa as variáveis para encontrar o maior contorno
    max_area = 0
    largest_contour = None
    
    # Itera sobre todos os contornos encontrados
    for contour in contours:
        # Calcula a área do contorno
        area = cv2.contourArea(contour)
        
        # Verifica se o contorno é grande o suficiente para ser a peça
        if area > 100:
            # Atualiza o maior contorno
            if area > max_area:
                max_area = area
                largest_contour = contour
    
    # Verifica se foi encontrado algum contorno
    if largest_contour is not None:
        # Encontra o retângulo delimitador para o contorno da peça
        x, y, w, h = cv2.boundingRect(largest_contour)
        
        # Desenha um retângulo em torno da peça
        cv2.rectangle(frame, (x, y), (x+w, y+h), (0, 255, 0), 2)
        
        # Calcula as coordenadas do centro da peça
        center_x = x + int(w/2)
        center_y = y + int(h/2)
        
        # Exibe as coordenadas do centro e posição da peça
        print("Centro da peça: ({}, {})".format(center_x, center_y))
        print("Posição da peça: ({}, {})".format(x, y))
    
    # Exibe o frame na janela
    cv2.imshow('frame', frame)
    
    # Sai do loop se a tecla 'q' for pressionada
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

# Libera a captura de vídeo e fecha a janela
cap.release()
cv2.destroyAllWindows()
