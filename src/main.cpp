#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;

int main(int argc, char **argv) {

	cv::Mat lena = cv::imread("../data/lena.png");

	cv::namedWindow("win");
	cv::imshow("win", lena);
	 
	std::cout << "Lena!" << std::endl;
	cv::waitKey();
	
	return 0;
}
