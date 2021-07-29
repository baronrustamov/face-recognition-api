#pragma once

#include <iostream>
#include <vector>
#include <string>

#include <cstdio>

#include <opencv2/opencv.hpp>

using namespace cv;

namespace Recognition 
{
    /// <summary>
    /// Face detection class.
    /// </summary>
    class Detector 
    {
        const std::string m_faceCascadePath = "cascades/haarcascade_frontalface_default.xml";
    public:
        Detector();

        /// <summary>
        /// Detects faces in an image. (use only if m_ImagePath is not set)
        /// </summary>
        /// <param name="imagePath">The path to the image.</param>
        /// <param name="windowName">Name of the window.</param>
        void detectFacesInImage(const std::string& imagePath, const std::string& windowName);
        void DetectFacesInVideo(const std::string& videoPath, const std::string& windowName, int slowMultiplier);
    };
}

