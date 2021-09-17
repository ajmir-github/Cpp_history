#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

using namespace std;

int main() {
	// Basic Function
	string path = "images/img.jpg";
	cv::Mat img, imgGray, imgBlur, imgCanny, imgErode, imgDilate, kernal;
	img = cv::imread(path);
	
	cv::cvtColor(img, imgGray, cv::COLOR_BGR2GRAY);
	
	cv::GaussianBlur(img, imgBlur, cv::Size(7, 7), 3);
	
	cv::Canny(imgBlur, imgCanny, 50, 50);

	kernal = cv::getStructuringElement(cv::MORPH_RECT, cv::Size(3, 3));
	// Erode shorten the canny lines
	cv::erode(imgCanny, imgErode, kernal);
	// Dilate widen the canny line
	cv::dilate(imgCanny, imgDilate, kernal);
	
	
	cv::imshow("image", img);
	cv::imshow("imgGray", imgGray);
	cv::imshow("imgBlur", imgBlur);
	cv::imshow("imgCanny", imgCanny);
	cv::imshow("imgErode", imgErode);
	cv::imshow("imgDilate", imgDilate);

	cout << "Size: " << sizeof(img) << "bytes" << endl;


	cv::waitKey(0);

}