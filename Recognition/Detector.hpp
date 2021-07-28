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
  /// 
  /// </summary>
  class detector {
    std::string m_ImagePath;
    std::string m_VideoPath;
  public:
    detector();
    
    /// <summary>
    /// 
    /// </summary>
    /// <param name="image_path"></param>
    /// <param name="video_path"></param>
    detector(const std::string& image_path, const std::string& video_path);

    void detect_faces_in_image(const std::string& image_path, const std::string& window_name);
    void detect_faces_in_image(const std::string& window_name);
  };

}

