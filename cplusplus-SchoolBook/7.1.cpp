#include<iostream>
using namespace std;

void AddSalary(int a[], int size)  //L1
{
	for (int i = 0; i < size; i++)
		if (a[i] < 600) a[i] = 600;
}
int main(void)
{
	int i, s[] = { 550,300,790,640 };
	int n = sizeof(s) / sizeof(s[0]);
	for (i = 0; i < n; i++) cout << s[i] << ' ';
	cout << endl;
	AddSalary(s, n);
	for (i = 0; i < n; i++) cout << s[i] << ' ';
	system("pause");
	return 0;
	
}
