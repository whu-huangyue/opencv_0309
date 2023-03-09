#include<opencv2/opencv.hpp>

int main()
{
cv::Mat picture = cv::imread("/home/hy/");
cv::imshow("显示图片", picture);
cv::waitKey(0);
}