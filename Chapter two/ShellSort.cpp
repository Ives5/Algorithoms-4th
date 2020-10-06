#include<iostream>
#include<vector>
using namespace std;
void Shellsort(vector<int>&);
void Shellsort(vector<int>& A)
{
	int len = A.size();
	int h = 1;
	while (h < len / 3)h = 3 * h + 1;
	while (h >= 1)//将数组变成h有序
	{
		for (int i = h; i < len; ++i)
		{
			for (int j = i; (j >= h) && (A[j] < A[j - h]); j -= h)
				swap(A[j], A[j - h]);
		}
		h = h / 3;
	}
}
int main()
{
	vector<int>A = { 23,4,5,23,6,6,32,3 };
	Shellsort(A);
	for (int i = 0; i < A.size(); ++i)
	{
		cout << A[i] << " ";
	}
	return 0;
}