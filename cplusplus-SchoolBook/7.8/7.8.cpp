#include<iostream>
#include<cstring>
using namespace std;

int main(void)
{
	/*char s[6];
	cout << "输入6个字符:" << endl;
	for (int i = 0; i < 6; i++) cin >> s[i];
	cout << "输出所输入字符的倒序:" << endl;
	for (int j = 5; j >= 0; j--) cout << s[j] << ' ';
	*/
	cout << "输入一个字符串后输出:" << endl;
	char a[100];
	cin.getline(a, 100);
	cout << a << endl;
	cout << "字符串的字符个数为:" << strlen(a) << endl;
	char b[100]="red";
	strcpy_s(b, "school");
	cout << b << endl;
	char c[100] = "school";
	strcat_s(c, a);
	cout << c << endl;
	cout << strcmp(b, c) << endl;
	//_strlwr_s(c);
	//cout << c<< endl;
	//_strupr_s(c);
	//cout << c << endl;
	cout << strncmp(b, c,3) << endl;
	strncpy_s(b, c, 3);
	cout << a << endl;
	cout << strstr("Welcome to C++ world!", "C++")<<endl;
	system("pause");
	return 0;
}
