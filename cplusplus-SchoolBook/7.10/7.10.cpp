#include<iostream>
using namespace std;

char * Mystrcat(char *s1, const char * s2)
{
	int i = 0, j = 0;          //�ֱ�ָ��s1��s2�е�Ԫ��
	while (s1[i]) i++;         //ʹiָ��s1���ַ�������λ��
	while (s1[i++] = s2[j++]); //��s2���ַ�������Ƶ�s1��
	return s1;
}
int main(void)
{
	char a[20] = "pencil", b[10] = "box";
	cout << Mystrcat(a, b) << endl;
	system("pause");
	return 0;
}