#include<iostream>
using namespace std;

void InsertSort(float a[], int size)  //插入排序函数
{
	int index;
	float inserter;  //将下标为1~size-1的元素逐个插入到已排序序列中适当的位置
	for (int i = 1; i < size; i++)
	{
		inserter = a[i];  //将待插元素a[i]暂存于inserter中，腾空a[i]
		index = i - 1;    //从a[i-1]开始向a[0]方向访问各元素，寻找插入位置
		while (index >= 0 && a[index] > inserter)
		{
			a[index + 1] = a[index]; //a[index]元素后移，腾空a[index]
			index--;
		}
		a[index + 1] = inserter;
	}
}
	
int main(void)
{
	const int n = 8;
	cout << "输入8个要排序的数字:" << endl;
	float  score[n];
	for (int i = 0; i < n; i++)
		cin >> score[i];
	InsertSort(score, n);
	for (int i = 0; i < n; i++)
		cout << score[i] << ' ';
	system("pause");
	return 0;
}
