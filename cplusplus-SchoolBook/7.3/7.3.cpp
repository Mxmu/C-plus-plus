#include<iostream>
using namespace std;

int main(void)
{
	float score[10],    //存放10位评委给某歌手的评分
		sum, max, min;  //分别存放某歌手得分的总和、最大值和最小值
	cout << "请依次输入10位评委给该歌手的评分:\n";
	int i;
	for (i = 0; i < 10; i++) cin >> score[i];
	for (sum = max = min = score[0], i = 1; i < 10; i++)
	{
		sum += score[i];
		if (score[i] > max) max = score[i];
		if (score[i] < min) min = score[i];
	}
	cout << "去掉一个最高分为" << max << endl;
	cout << "去掉一个最低分为" << min << endl;
	cout << "该歌手最后的得分为:" << (sum - max - min) / 8 << endl;
	system("pause");
	return 0;
}
