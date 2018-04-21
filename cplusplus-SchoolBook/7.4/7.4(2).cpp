#include<iostream>
using namespace std;

void InsertSort(float a[], int size)  //����������
{
	int index;
	float inserter;  //���±�Ϊ1~size-1��Ԫ��������뵽�������������ʵ���λ��
	for (int i = 1; i < size; i++)
	{
		inserter = a[i];  //������Ԫ��a[i]�ݴ���inserter�У��ڿ�a[i]
		index = i - 1;    //��a[i-1]��ʼ��a[0]������ʸ�Ԫ�أ�Ѱ�Ҳ���λ��
		while (index >= 0 && a[index] > inserter)
		{
			a[index + 1] = a[index]; //a[index]Ԫ�غ��ƣ��ڿ�a[index]
			index--;
		}
		a[index + 1] = inserter;
	}
}
	
int main(void)
{
	const int n = 8;
	cout << "����8��Ҫ���������:" << endl;
	float  score[n];
	for (int i = 0; i < n; i++)
		cin >> score[i];
	InsertSort(score, n);
	for (int i = 0; i < n; i++)
		cout << score[i] << ' ';
	system("pause");
	return 0;
}
