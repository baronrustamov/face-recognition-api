#include "Detector.hpp"

namespace recognition {

  detector::detector() { }

  detector::detector(const std::string& image_path, const std::string& video_path) {
    this->m_ImagePath = image_path;
    this->m_VideoPath = video_path;
  }

  void detector::detect_faces_in_image(const std::string& image_path, const std::string& window_name) {
  }

  void detector::detect_faces_in_image(const std::string& window_name) {
  }

}