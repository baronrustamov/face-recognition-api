#include "Detector.hpp"

namespace Recognition 
{
    Detector::Detector() { }

    void Detector::detectFacesInImage(const std::string& imagePath, const std::string& windowName) 
    {
        Mat image = imread(imagePath);

        CascadeClassifier faceCascade;
        faceCascade.load(this->m_faceCascadePath);

        std::vector<Rect> faces;
        faceCascade.detectMultiScale(image, faces, 1.1, 3);

        for (int i = 0; i < faces.size(); i++) 
            rectangle(image, faces[i].tl(), faces[i].br(), Scalar(255, 0, 255), 3);

        imshow(windowName, image);
        waitKey(0);
    }

    void Detector::DetectFacesInVideo(const std::string& videoPath, const std::string& windowName, int slowMultiplier)
    {
        auto videoCapture = VideoCapture(videoPath);
        Mat frame = imread(videoPath);

        CascadeClassifier faceCascade;
        faceCascade.load(this->m_faceCascadePath);

        while (true)
        {
            videoCapture.read(frame);

            std::vector<Rect> faces;
            faceCascade.detectMultiScale(frame, faces, 1.1, 3);

            for (int i = 0; i < faces.size(); i++)
                rectangle(frame, faces[i].tl(), faces[i].br(), Scalar(255, 0, 255), 3);

            imshow(windowName, frame);
            waitKey(slowMultiplier);
        }
    }
}