// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<opencv2\opencv.hpp>
using namespace cv;

class Solution {
public:
	int reverse(int x) {
		int temp = x;
		long long out = 0;
		int m = 0;
		while (temp){
			m = temp % 10;
			out = 10 * out + m;
			temp = temp / 10;
		}
		if (abs(out)>pow(2,31)){
			out = 0;
		}
		return out;
	}
};

int _tmain(int argc, _TCHAR* argv[])
{
	//Mat picture = imread("1.bmp");//图片必须添加到工程目录下                            
	//imshow("测试程序", picture);
	Solution a;
	int m = a.reverse(1534236469);
	cvWaitKey(6000);
	return 0;
}
