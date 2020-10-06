#include<iostream>
#include<vector>
using namespace std;
void Insertionsort(vector<int>&);
void Insertionsort(vector<int>& A)
{
	int len = A.size();
	for (int i = 1; i < len; ++i)
	{
		for (int j = i; j > 0; --j)
		{
			if (A[j] < A[j - 1])
				swap(A[j], A[j - 1]);
			else break;
		}
	}
} 
int main()
{
	vector<int>A = { 4,5,6,7,3242,45,62,346,77,5,3 };
	Insertionsort(A);
	for (int i = 0; i < A.size(); ++i)
	{
		cout << A[i] << " ";
	}
	return 0;
}