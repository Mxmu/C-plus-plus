#include<iostream>
using namespace std;

void reflect(int a[][4], int b[][4], int row)       //��ά�������β�
{
	for (int i = 0; i < row; i++)
		for (int j = 0; j < 4; j++) { b[i][j] = a[i][4 - j - 1]; }
}
int main(void)
{
	int A[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
	int B[3][4], i, j;
	cout << "����A:\n";
	for (i = 0; i < 3; i++, cout << endl)
		for (j = 0; j < 4; j++)
			cout << A[i][j] << '\t';
	reflect(A, B, 3);           //ʵ���ö�ά������
	cout << "����B:\n";
	for (i = 0; i < 3; i++, cout << endl)
		for (j = 0; j < 4; j++)
			cout << B[i][j] << '\t';
	system("pause");
	return 0;
}
