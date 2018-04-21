#include<iostream>
using namespace std;

//扫描sub中的字符串是否是str中的字符串的子串
int IsSubstr(const char str[], const char sub[])
{
	int i, j, k;
	for (k = 0; str[k]; k++)
	{
		i = k;       //i指向str中元素，从str[k]开始，与sub中的字符比较
		j = 0;       //j指向sub中元素，每次重新设置为初始位置
		while (sub[j] && str[i] == sub[j]) { i++; j++; }
		if (!sub[j]) return 1;           //找到子串，返回1
	}
	return 0; //未找到子串，返回0
}
int main(void)
{
	char bookname[6][30] = {             //定义二维字符数组保存书面
		"database design","java programming",
		"theory of database","Access database",
		"algorithm","operating system" };
	cout << "序号\t书名\n";
	for (int i = 0; i < 6; i++)     //逐个判断书名中是否含有字符串"database"
		if (IsSubstr(bookname[i], "database"))
			cout << i + 1 << '\t' << bookname[i] << endl;
	system("pause");
	return 0;
}
 
	
