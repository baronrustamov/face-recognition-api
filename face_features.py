import numpy as np
import cv2

def run_window(width: int, height: int, is_gray: bool, title: str):
    capture = cv2.VideoCapture(0)

    # Set width and height
    capture.set(3, width)
    capture.set(4, height)

    while True:
        _ret, frame = capture.read()
        if is_gray == True:
            gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)

            # Render the window as grayscale
            cv2.imshow(title, gray)

            # Check if the key hits the escape button
            curr_key = cv2.waitKey(30) & 0xff
            if curr_key == 27:
                break
        else:
            cv2.imshow(title, frame)
            curr_key = cv2.waitKey(30) & 0xff
            if curr_key == 27:
                break

    capture.release()
    cv2.destroyAllWindows()

run_window(800, 600, False, 'Color')
run_window(800, 600, True, 'Gray')
