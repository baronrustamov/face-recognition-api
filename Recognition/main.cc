#include "detector.hpp"

using namespace recognition;

int main(int, char**) 
{
    Detector detector;
    //detector.detectFacesInImage("res/rdj.jpg", "ee");
    detector.detectFacesInVideo("res/Video_test.mp4", "Video Test", 10);
}