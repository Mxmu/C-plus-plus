#include<iostream>
#include<cstring>
using namespace std;

void encrypt(char s[], int n)          //加密函数
{
	for (int i = 0; i < n - 1; i++)
		if (s[i] < 0)                      //发现汉字
		{
			char t = s[i]; s[i] = s[i + 1]; s[i + 1] = t; //交换前后两字节
			i++;
		}
}
int main(void)
{
	char text[1024];           //存放输入的字符串
	cout << "输入一个中英文字符串:" << endl;
	cin.getline(text, 1024);
	int len = strlen(text);         //计算字符串长度
	encrypt(text, len);            //调用加密函数进行加密
	cout << "密文为:" << text << endl;
	encrypt(text, len);             //解密与加密方法相同
	cout << "解密后为:" << text << endl;
	system("pause");
	return 0;
}