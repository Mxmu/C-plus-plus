#include<iostream>
using namespace std;

//�ö��ֲ��ҷ�����Ԫ�س��������е�����arr�в���ֵΪkey��Ԫ��
int HalfSearch(int arr[], int size, int key)
{
	int low = 0, high = size - 1, mid;    //�����ס�ĩԪ���±�
	while (low <= high)
	{
		mid = (low + high) / 2;          //�����м�Ԫ���±�
		if (key == arr[mid])                //���ҵ������ֵ��ȵ�Ԫ�أ��򷵻����±ꣻ
			return mid;
		else if (key > arr[mid])           //����������ֵ�����м�Ԫ�أ�
			low = mid + 1;               //��ȡ��벿�ּ������ң�
		else high = mid - 1;              //����ȡǰ�벿�ּ�������
	}
	return -1;                 //δ�ҵ�������-1
}
int main(void)
{
	int a[10] = { 13,27,36,57,65,73,82,88,90,99 }, value, n;
	cout << "��������ҵ�����:" << endl;
	cin >> value;
	if ((n = HalfSearch(a, 10, value)) != -1)
		cout << "�ҵ�" << value << ",�ǵ�" << n + 1 << "��Ԫ��!" << endl;
	else cout << "������û��Ҫ�ҵ�ֵ" << endl;
	system("pause");
	return 0;
}