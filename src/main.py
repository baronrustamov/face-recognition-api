import face_detector as detector

def main():
    detector.detect_faces_in_image('res/rdj.jpg')
    detector.detect_faces_in_camera(640, 480)

main()