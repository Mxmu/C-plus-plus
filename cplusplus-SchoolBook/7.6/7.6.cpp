#include<iostream>
using namespace std;

int main(void)
{
	const int M = 5, N = 4;
	int i, j, score[M][N],           //score存放成绩
		sum[M] = { 0 };              //sum存放每人的总分
	float ave[N] = { 0 };            //存放每门课的平均分

	for (int i = 0; i < M; i++)
	{
		cout << "输入第" << i + 1 << "名学生的成绩:" << endl;
		for (int j = 0; j < N; j++)
		{
			cin >> score[i][j];         //输入一个成绩
			sum[i] += score[i][j];      //累加到对应个人的总分数组元素中
			ave[j] += score[i][j];      //累加到对应课程的平均分数组元素中
		}
	}
	for (j = 0; j < N; j++) ave[j] /= M;      //计算每门课程的平均分
	cout << "\t政治\t数学\t英语\tC++\t总分\n";
	for (i = 0; i < M; i++)         //输出成绩与结果
	{
		for (j = 0; j < N; j++) cout << '\t' << score[i][j];
		cout << '\t' << sum[i] << endl;
	}
	cout << "均分:";
	for (j = 0; j < N; j++) cout << '\t' << ave[j];
	system("pause");
	return 0;
}

