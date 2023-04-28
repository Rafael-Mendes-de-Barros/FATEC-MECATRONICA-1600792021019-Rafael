import cv2

cap = cv2.VideoCapture("http://192.168.137.2:4747/video")
while cap.isOpened():
    ret, imagem = cap.read()
    gray = cv2.cvtColor(imagem, cv2.COLOR_BGR2GRAY)
    cv2.imshow("gray",gray) 
    ret, thresh1 = cv2.threshold(gray,127,255,cv2.THRESH_BINARY)
    cv2.imshow("Binary",thresh1) 
    key = cv2.waitKey(3)
    if key == ord("q"):
     break
     
cv2.destroyAllWindows()
cap.release()
