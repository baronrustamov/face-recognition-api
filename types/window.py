import cv2 as cv

class Window:
    def __init__(self, width: int, height: int, is_gray: bool, title: str):
        self.width = width
        self.height = height
        self.is_gray = is_gray
        self.title = title

    def run_window(self):
        capture = cv2.VideoCapture(0)

        # Set width and height
        capture.set(3, self.width)
        capture.set(4, self.height)

        # Render loop
        while True:
            _ret, frame = capture.read()
            if self.is_gray == True:
                gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)

                # Render the window as grayscale
                cv2.imshow(self.title, gray)

                # Check if the key hits the escape button
                curr_key = cv2.waitKey(30) & 0xff
                if curr_key == 27:
                    break
            else:
                cv2.imshow(self.title, frame)
                curr_key = cv2.waitKey(30) & 0xff
                if curr_key == 27:
                    break

        capture.release()
        cv2.destroyAllWindows()
