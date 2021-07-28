#include <iostream>

#include <opencv2/opencv.hpp>

using namespace cv;

namespace face_recognition
{
  void import_images(const std::string& path)
  {
    // Reads image and stores info in matrix
    Mat image = imread(path);
    imshow("Image", image); // Make a window
    waitKey(0);
  }
}

int main(int, char**) 
{
  face_recognition::import_images("res/GOJO.jpg");
}