#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void Selectionsort(vector<int>&);
void Selectionsort(vector<int>& A)
{
	int len = A.size();
	for (int i = 0; i < len - 1; ++i)
	{
		int min = i;//最小元素的索引
		for (int j = i + 1; j < len; ++j)
		{
			if (A[j] < A[min])min = j;
		}
		swap(A[i], A[min]);
	}
}
bool issorted(vector<int>&);
bool issorted(vector<int>& A)
{
	for (int i = 0; i < A.size() - 1; i++)
	{
		if (A[i] <= A[i + 1]);
		else return false;
	}
	return true;
}
int main()//test
{
	vector<int>A = { 6,43,5,44,35,555,6 };
	Selectionsort(A);
	if (issorted(A)) {
		for (int i = 0; i < A.size(); ++i)
		{
			cout << A[i] << " ";
		}
	}
	else cout << "Not issorted" << endl;
	return 0;
}