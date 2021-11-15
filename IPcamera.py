import cv2
cap = cv2.VideoCapture()

while True:
  ret, frame = cap.read()
  cv2.imshow("Frame", frame)

  if cv2.waitKey(1) == 27:
    exit(0)