#include<iostream>
#include<cstring>
using namespace std;

void encrypt(char s[], int n)          //���ܺ���
{
	for (int i = 0; i < n - 1; i++)
		if (s[i] < 0)                      //���ֺ���
		{
			char t = s[i]; s[i] = s[i + 1]; s[i + 1] = t; //����ǰ�����ֽ�
			i++;
		}
}
int main(void)
{
	char text[1024];           //���������ַ���
	cout << "����һ����Ӣ���ַ���:" << endl;
	cin.getline(text, 1024);
	int len = strlen(text);         //�����ַ�������
	encrypt(text, len);            //���ü��ܺ������м���
	cout << "����Ϊ:" << text << endl;
	encrypt(text, len);             //��������ܷ�����ͬ
	cout << "���ܺ�Ϊ:" << text << endl;
	system("pause");
	return 0;
}