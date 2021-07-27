import cv2 as cv
import numpy as np

from utils import turn_gray

FACE_CASCADE = cv.CascadeClassifier('../cascades/haarcascade_frontalface_default.xml')

def detect_faces_in_image(image_path: str) -> None:
    '''
    Detects all the faces in the image. (Not very accurate due to the high value of minNeighbors)

    Paramaters:
        image_path: Path to the image to detect the faces in
    '''
    image_color = cv.imread(image_path)
    image_gray = turn_gray(image_color)

    # Returns rectangular coordinates of the detected face based on scaleFactor and minNeighbors
    faces_rect = FACE_CASCADE.detectMultiScale(image_gray, scaleFactor=1.1, minNeighbors=3)

    # For each coordinate in the faces_rect, draw a rectangle
    for (x, y, w, h) in faces_rect:
        cv.rectangle(image_color, (x, y), (x+w, y+h), (0, 255, 0), thickness=2)

    cv.imshow('Detected Faces', image_color)
    cv.waitKey(0)

def detect_faces_in_video(video_path: str) -> None:
    '''
    Detects faces in a video

    Parameters:
        video_path: Path to the image to detect the faces in
    '''
    pass # Does nothing for now

def detect_faces_in_camera(width: int, height: int) -> None:
    '''
    Detects faces in the camera capture

    Parameters:
        width: Width of camera capture screen
        height: Height of camera capture screen
    '''
    video_cap = cv.VideoCapture(0)

    video_cap.set(3, width)
    video_cap.set(4, height)

    # Render loop
    while True:
        ret, frame = video_cap.read()
        gray = turn_gray(frame)

        cv.imshow('Color', frame)
        cv.imshow('Grayscale', gray)

        k = cv.waitKey(30) & 0xff
        if k == 27: break
    
    video_cap.release()
    cv.destroyAllWindows()
