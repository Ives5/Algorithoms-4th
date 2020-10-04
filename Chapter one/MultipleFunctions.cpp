#include<iostream>
#include<cmath>
using namespace std;
int myabs(int);//����һ�������ľ���ֵ
double myabs(double);//����һ���������ľ���ֵ
bool isPrime1(int);//�ж�һ�����Ƿ�������(����1��
bool isPrime2(int);//�ж�һ�����Ƿ�������������2)  !!!
double mysqrt(double);//����ƽ������ţ�ٵ�������  !!!
double hypotenuse(double, double);//����ֱ�������ε�б��
double H(int);//������ͼ���

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

bool isPrime2(int N)//ʱ�临�ӶȽ�С
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