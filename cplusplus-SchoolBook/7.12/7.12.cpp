#include<iostream>
using namespace std;

//ɨ��sub�е��ַ����Ƿ���str�е��ַ������Ӵ�
int IsSubstr(const char str[], const char sub[])
{
	int i, j, k;
	for (k = 0; str[k]; k++)
	{
		i = k;       //iָ��str��Ԫ�أ���str[k]��ʼ����sub�е��ַ��Ƚ�
		j = 0;       //jָ��sub��Ԫ�أ�ÿ����������Ϊ��ʼλ��
		while (sub[j] && str[i] == sub[j]) { i++; j++; }
		if (!sub[j]) return 1;           //�ҵ��Ӵ�������1
	}
	return 0; //δ�ҵ��Ӵ�������0
}
int main(void)
{
	char bookname[6][30] = {             //�����ά�ַ����鱣������
		"database design","java programming",
		"theory of database","Access database",
		"algorithm","operating system" };
	cout << "���\t����\n";
	for (int i = 0; i < 6; i++)     //����ж��������Ƿ����ַ���"database"
		if (IsSubstr(bookname[i], "database"))
			cout << i + 1 << '\t' << bookname[i] << endl;
	system("pause");
	return 0;
}
 
	
