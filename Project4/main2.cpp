#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;
int main()
{
	cv::Mat dispMat = imread("D:\\Õº∆¨1.png");
	cv::Point pt, pt1, pt2;//∂®“Âµ„
	cv::Rect rect;
	pt.x = 100;
	pt.y = 100;
	pt1.x = 0;
	pt1.y = 0;
	pt2.x = 100;
	pt2.y = 100;
	rect.x = 200;
	rect.y = 200;
	rect.width = 200;
	rect.height = 200;
	//rectangle(dispMat, rect, 5, CV_RGB(255, 0, 0),1, 8, 0);
	circle(dispMat, pt, 5, CV_RGB(255, 0, 0), 4, 8, 0);
	line(dispMat, pt1, pt2, CV_RGB(255, 0, 0));
	rectangle(dispMat, rect, CV_RGB(0, 0, 255), 4, 8, 0);
	cv::imshow("Mat3", dispMat);
	waitKey(0);
	return 0;
}
