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

namespace recognition {

  /// <summary>
  /// Face detection class.
  /// </summary>
  class detector {
    std::string m_ImagePath;
    std::string m_VideoPath;

    const std::string m_FaceCascadePath = "cascades/haarcascade_frontalface_default.xml";
  public:
    detector();
    
    /// <summary>
    /// Sets path values.
    /// </summary>
    /// <param name="image_path">Detector's image path.</param>
    /// <param name="video_path">Detector's video path.</param>
    detector(const std::string& image_path, const std::string& video_path);

    /// <summary>
    /// Detects faces in an image. (use only if m_ImagePath is not set)
    /// </summary>
    /// <param name="image_path">The path to the image.</param>
    /// <param name="window_name">Name of the window.</param>
    void detect_faces_in_image(const std::string& image_path, const std::string& window_name);

    /// <summary>
    /// Detects faces in an image.
    /// </summary>
    /// <param name="window_name">Name of the window.</param>
    void detect_faces_in_image(const std::string& window_name);
  };

}

