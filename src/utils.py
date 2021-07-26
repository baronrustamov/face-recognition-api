import cv2 as cv

def turn_gray(colored_image): 
    return cv.cvtColor(colored_image, cv.COLOR_BGR2GRAY)