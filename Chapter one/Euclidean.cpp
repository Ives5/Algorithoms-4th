/*
ŷ������㷨�����������Ǹ�����p��q�����Լ����
��q��0�������Լ��Ϊp.���򣬽�p����q�õ�����r��
p��q�����Լ����Ϊq��r�����Լ��
*/
#include<iostream>
using namespace std;
int gcd(int,int);
int gcd(int p,int q)
{
	if (q == 0)return p;
	int r = p % q;
	return gcd(q, r);
}
int main()
{
	cout << gcd(2, 6);
	return 0;
}