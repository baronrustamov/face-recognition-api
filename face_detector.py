import cv2 as cv
import numpy as np
from utils import turn_gray

def detect_faces_in_image(image_path: str) -> None:
    image_color = cv.imread(image_path)
    image_gray = turn_gray(image_color)
    face_cascade = cv.CascadeClassifier('cascades/haarcascade_frontalface_default.xml')

    # Returns rectangular coordinates of the detected face based on scaleFactor and minNeighbors
    faces_rect = face_cascade.detectMultiScale(image_gray, scaleFactor=1.1, minNeighbors=3)

    # For each coordinate in the faces_rect, draw a rectangle
    for (x, y, w, h) in faces_rect:
        cv.rectangle(image_color, (x, y), (x+w, y+h), (0, 255, 0), thickness=2)

    cv.imshow('Detected Faces', image_color)
    cv.waitKey(0)

def detect_faces_in_video(video_path: str) -> None:
    pass # Does nothing for now