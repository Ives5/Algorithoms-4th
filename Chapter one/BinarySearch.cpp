#include<iostream>
#include<vector>
#include<algorithm>
//�������ʵ���˶��ֲ����㷨�����ڰ���������Ӧ���ж��㷨�����˼���
using namespace std;
int myrank(int, vector<int>&);
int myrank(int key, vector<int>& A)
{
	int lo = 0;
	int hi = A.size() - 1;
	while (lo <= hi) {
		int mid = lo + ((hi - lo)>>1);//midֵʵʱ����
		/*
		���������ȼ���˳����ȼ�֮���ǼӼ���
		֮�������λ����ͬ�����ȼ��������������ִ��
		(���󲿷ֵ�˫Ŀ���㣬���˸�ֵ�Ǵ��ҵ����������Ǵ����ң�
		*/
		if (A[mid] < key) lo = mid + 1;
		else if (A[mid] > key) hi = mid - 1;
		else return mid;
	}
	return -1;
}
int main()//test����
{
	vector<int>whitelist(9);
	vector<int>getinput;
	vector<int>ans;
	whitelist = { 1,3,5,6,4,5,6,7 };
	sort(whitelist.begin(), whitelist.end());
	int tempkey = 0;
	while (cin >> tempkey)
	{
		getinput.push_back(tempkey);
		if (myrank(tempkey, whitelist) == -1)
		{
			ans.push_back(tempkey);
		}
	}
	cout << "Whitelist : " << endl;
	for (int i = 0; i < whitelist.size(); i++)
	{
		cout << whitelist[i] <<" ";
	}
	cout << endl;
	cout << "Input array : " << endl;
	for (int i = 0; i < getinput.size(); ++i)
	{
		cout << getinput[i]<<" ";
	}
	cout << endl;
	cout << "The search result array : " << endl;
	for (int i = 0; i < ans.size(); ++i)
	{
		cout << ans[i] << endl;
	}
	return 0;
}