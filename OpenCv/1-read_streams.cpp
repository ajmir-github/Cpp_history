#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

using namespace std;

int main() {
	// Read an image
	string path = "images/img.png";
	cv::Mat img = cv::imread(path);
	cv::imshow("image", img);
	cout << "Width: " << img.rows << " X Height: " << img.cols << endl;
	cv::waitKey(0);

	// Read webcam
	cv::VideoCapture cap(0);
	cv::Mat frame;
	while (cap.isOpened())
	{
		
		cap >> frame;
		cv::imshow("webcam", frame);
		int order = cv::waitKey(32);
		if (order == 120) break;

	}
}