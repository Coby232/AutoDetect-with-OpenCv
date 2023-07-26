#pragma once
#include "opencv.h"
#include <iostream>


namespace camera {
	int openCam1() {
		cv::VideoCapture cap(1);
		if (!cap.isOpened())  // check if we succeeded
			return -1;
		cv::Mat img;

		for (;;) {

			cap.read(img);
			imshow("Auto Dectector", img);
			int keypress = cv::waitKey(1);
			if (keypress == 27) {
				if (cap.isOpened())
					cap.release();
				else
					cap.open(0);
			}
		}
		
		return 0;
	}
}