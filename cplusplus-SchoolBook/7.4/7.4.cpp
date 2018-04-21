#include<iostream>
using namespace std;

void BubbleSort(float a[], int size)//冒泡排序函数
{
	float t;
	for (int i = 1; i < size; i++)  //外循环用变量i控制排序趟数
		for (int j = 0; j < size - i; j++)//内循环用变量j控制比较次数
			if (a[j] < a[j + 1]) //比较相邻元素，若逆序则交换
			{
				t = a[j]; a[j] = a[j + 1]; a[j + 1] = t;
			}
}
/*int main(void)
{
	const int n = 8;            //定义常量n表示数组大小
	float score[n];             //定义数组存放成绩
	cout << "Please input " << n << " score:\n";
	for (int i = 0; i < n; i++)
		cin >> score[i];
	BubbleSort(score, n);
	for (int i = 0; i < n; i++)
		cout << score[i] << ' ';
	system("pause");
	return 0;
}
			*/
