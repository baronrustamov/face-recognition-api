#include "detector.hpp"

namespace recognition {

  Detector::Detector() { }

  Detector::Detector(const std::string& image_path, const std::string& video_path) {
    this->m_ImagePath = image_path;
    this->m_VideoPath = video_path;
  }

  void Detector::detectFacesInImage(const std::string& image_path, const std::string& window_name) {
    Mat image = imread(image_path);

    // The face cascade holds all information for how to detect the face
    CascadeClassifier face_cascade;
    face_cascade.load(this->m_FaceCascadePath);
    
    // Not necessary
    //if (face_cascade.empty()) {
    //  printf("Cascade file not found.");
    //}

    std::vector<Rect> faces;
    face_cascade.detectMultiScale(image, faces, 1.1, 3);

    for (int i = 0; i < faces.size(); i++) {
      // Draw a rectangle around each face
      rectangle(image, faces[i].tl(), faces[i].br(), Scalar(255, 0, 255), 3);
    }

    imshow(window_name, image);
    waitKey(0);
  }

  void Detector::detectFacesInImage(const std::string& window_name) {
    Mat image = imread(this->m_ImagePath);

    // The face cascade holds all information for how to detect the face
    CascadeClassifier face_cascade;
    face_cascade.load(this->m_FaceCascadePath);

    // Not necessary
    //if (face_cascade.empty()) {
    //  printf("Cascade file not found.");
    //}

    std::vector<Rect> faces;
    face_cascade.detectMultiScale(image, faces, 1.1, 3);

    for (int i = 0; i < faces.size(); i++) {
      // Draw a rectangle around each face
      rectangle(image, faces[i].tl(), faces[i].br(), Scalar(255, 0, 255), 3);
    }

    imshow(window_name, image);
    waitKey(0);
  }

}
