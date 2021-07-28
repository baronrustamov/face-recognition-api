#include "detector.hpp"

int main() {
    recognition::Detector detector;
    detector.detectFacesInImage("res/rdj.jpg", "ee");
}