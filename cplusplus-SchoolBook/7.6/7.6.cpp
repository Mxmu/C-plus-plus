#include<iostream>
using namespace std;

int main(void)
{
	const int M = 5, N = 4;
	int i, j, score[M][N],           //score��ųɼ�
		sum[M] = { 0 };              //sum���ÿ�˵��ܷ�
	float ave[N] = { 0 };            //���ÿ�ſε�ƽ����

	for (int i = 0; i < M; i++)
	{
		cout << "�����" << i + 1 << "��ѧ���ĳɼ�:" << endl;
		for (int j = 0; j < N; j++)
		{
			cin >> score[i][j];         //����һ���ɼ�
			sum[i] += score[i][j];      //�ۼӵ���Ӧ���˵��ܷ�����Ԫ����
			ave[j] += score[i][j];      //�ۼӵ���Ӧ�γ̵�ƽ��������Ԫ����
		}
	}
	for (j = 0; j < N; j++) ave[j] /= M;      //����ÿ�ſγ̵�ƽ����
	cout << "\t����\t��ѧ\tӢ��\tC++\t�ܷ�\n";
	for (i = 0; i < M; i++)         //����ɼ�����
	{
		for (j = 0; j < N; j++) cout << '\t' << score[i][j];
		cout << '\t' << sum[i] << endl;
	}
	cout << "����:";
	for (j = 0; j < N; j++) cout << '\t' << ave[j];
	system("pause");
	return 0;
}

