#include<iostream>
using namespace std;

void reflect(int a[][4], int b[][4], int row)       //二维数组做形参
{
	for (int i = 0; i < row; i++)
		for (int j = 0; j < 4; j++) { b[i][j] = a[i][4 - j - 1]; }
}
int main(void)
{
	int A[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
	int B[3][4], i, j;
	cout << "矩阵A:\n";
	for (i = 0; i < 3; i++, cout << endl)
		for (j = 0; j < 4; j++)
			cout << A[i][j] << '\t';
	reflect(A, B, 3);           //实参用二维数组名
	cout << "矩阵B:\n";
	for (i = 0; i < 3; i++, cout << endl)
		for (j = 0; j < 4; j++)
			cout << B[i][j] << '\t';
	system("pause");
	return 0;
}
