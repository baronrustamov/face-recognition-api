import cv2 as cv

image_color = cv.imread('res/rdj.jpg')

# The haarcascades can only detect grayscale images
# image_gray parses image_color and converts it to cv.COLOR_BGR2GRAY
image_gray = cv.cvtColor(image_color, cv.COLOR_BGR2GRAY)
face_cascade = cv.CascadeClassifier('cascades/haarcascade_frontalface_default.xml')

# Returns rectangular coordinates of the detected face based on scaleFactor and minNeighbors
faces_rect = face_cascade.detectMultiScale(image_gray, scaleFactor=1.1, minNeighbors=3)

# For each coordinate in the faces_rect, draw a rectangle
for (x, y, w, h) in faces_rect:
    cv.rectangle(image_color, (x, y), (x+w, y+h), (0, 255, 0), thickness=2)

cv.imshow('Detected Faces', image_color)
cv.waitKey(0)