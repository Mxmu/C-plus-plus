#include<iostream>
using namespace std;

//用二分查找法，在元素呈升序排列的数组arr中查找值为key的元素
int HalfSearch(int arr[], int size, int key)
{
	int low = 0, high = size - 1, mid;    //设置首、末元素下标
	while (low <= high)
	{
		mid = (low + high) / 2;          //计算中间元素下标
		if (key == arr[mid])                //若找到与待查值相等的元素，则返回其下标；
			return mid;
		else if (key > arr[mid])           //否则，若待查值大于中间元素，
			low = mid + 1;               //则取后半部分继续查找；
		else high = mid - 1;              //否则取前半部分继续查找
	}
	return -1;                 //未找到，返回-1
}
int main(void)
{
	int a[10] = { 13,27,36,57,65,73,82,88,90,99 }, value, n;
	cout << "请输入待找的整数:" << endl;
	cin >> value;
	if ((n = HalfSearch(a, 10, value)) != -1)
		cout << "找到" << value << ",是第" << n + 1 << "个元素!" << endl;
	else cout << "数组中没有要找的值" << endl;
	system("pause");
	return 0;
}