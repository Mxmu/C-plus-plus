#include<iostream>
using namespace std;

void BubbleSort(float a[], int size)//ð��������
{
	float t;
	for (int i = 1; i < size; i++)  //��ѭ���ñ���i������������
		for (int j = 0; j < size - i; j++)//��ѭ���ñ���j���ƱȽϴ���
			if (a[j] < a[j + 1]) //�Ƚ�����Ԫ�أ��������򽻻�
			{
				t = a[j]; a[j] = a[j + 1]; a[j + 1] = t;
			}
}
/*int main(void)
{
	const int n = 8;            //���峣��n��ʾ�����С
	float score[n];             //���������ųɼ�
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
