#include<iostream>
#include<cmath>
using namespace std;
int myabs(int);//计算一个整数的绝对值
double myabs(double);//计算一个浮点数的绝对值
bool isPrime1(int);//判断一个数是否是素数(方法1）
bool isPrime2(int);//判断一个数是否是素数（方法2)  !!!
double mysqrt(double);//计算平方根（牛顿迭代法）  !!!
double hypotenuse(double, double);//计算直角三角形的斜边
double H(int);//计算调和级数

int myabs(int x)
{
	if (x < 0)return -x;
	else return x;
}

double myabs(double x)
{
	if (x < 0.0)return -x;
	else return x;
}

bool isPrime1(int N)
{
	if (N < 2)return false;
	for (int i = 0; i * i < N; ++i)
	{
		if (N % i == 0)return false;
	}
	return true;
}

bool isPrime2(int N)//时间复杂度较小
{
	if (N == 2 || N == 3)
		return true;
	if (N % 6 != 1 || N % 6 != 5)
		return false;
	for (int i = 5; i * i < N; i += 6)
	{
		if (N % i == 0 || N % (i + 2) == 0)
			return false;
	}
	return true;
}

double mysqrt(double x)
{
	if (x < 0)return -1;
	double err = 1e-15;
	double t = x;
	while (abs(t - x / t) > err * t)
	{
		t = (x / t + t) / 2.0;
	}
	return t;
}

double hypotenuse(double a, double b)
{
	return sqrt(a * a + b * b);
}

double H(int N)
{
	double sum = 0.0;
	for (int i = 1; i <= N; ++i)
	{
		sum += 1.0 / i;
	}
	return sum;
}

int main()
{
	return 0;
}