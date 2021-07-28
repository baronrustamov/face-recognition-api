#pragma once

#include <string>
#include <vector>

#ifdef __cplusplus
    #include <opencv2/opencv.hpp>
    #include <cstdio>

    using namespace cv;
#else
    #error C++ only
#endif

namespace recognition 
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

        /// <summary>
        /// 
        /// </summary>
        /// <param name="videoPath"></param>
        /// <param name="windowName"></param>
        void detectFacesInVideo(const std::string& videoPath, const std::string& windowName);
    };
}

