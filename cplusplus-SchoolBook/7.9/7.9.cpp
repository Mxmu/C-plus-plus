#include<iostream>
#include<cstring>
using namespace std;
char PASS[] = "YCM";     //����PASS�����ʵ�ʿ���

int main(void)
{
	char user[10];         //����û�����Ŀ���
	cout << "Please input your password:" << endl;
	cin >> user;                   //�������
	if (!strcmp(user, PASS))
		cout << "Your password is correct.\n";
	else cout << "Your password is error!\n";
	system("pause");
	return 0;
}