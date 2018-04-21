#include<iostream>
using namespace std;

char * Mystrcat(char *s1, const char * s2)
{
	int i = 0, j = 0;          //分别指向s1和s2中的元素
	while (s1[i]) i++;         //使i指向s1中字符串结束位置
	while (s1[i++] = s2[j++]); //把s2中字符逐个复制到s1中
	return s1;
}
int main(void)
{
	char a[20] = "pencil", b[10] = "box";
	cout << Mystrcat(a, b) << endl;
	system("pause");
	return 0;
}