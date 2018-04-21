#include<iostream>
#include<cstring>
using namespace std;
char PASS[] = "YCM";     //定义PASS，存放实际口令

int main(void)
{
	char user[10];         //存放用户输入的口令
	cout << "Please input your password:" << endl;
	cin >> user;                   //输入口令
	if (!strcmp(user, PASS))
		cout << "Your password is correct.\n";
	else cout << "Your password is error!\n";
	system("pause");
	return 0;
}