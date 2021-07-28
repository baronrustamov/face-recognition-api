#include "Detector.hpp"

int main() {
  recognition::detector detector;
  detector.detect_faces_in_image("res/rdj.jpg", "ee");
}