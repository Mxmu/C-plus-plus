#include<iostream>
using namespace std;

int main(void)
{
	float score[10],    //���10λ��ί��ĳ���ֵ�����
		sum, max, min;  //�ֱ���ĳ���ֵ÷ֵ��ܺ͡����ֵ����Сֵ
	cout << "����������10λ��ί���ø��ֵ�����:\n";
	int i;
	for (i = 0; i < 10; i++) cin >> score[i];
	for (sum = max = min = score[0], i = 1; i < 10; i++)
	{
		sum += score[i];
		if (score[i] > max) max = score[i];
		if (score[i] < min) min = score[i];
	}
	cout << "ȥ��һ����߷�Ϊ" << max << endl;
	cout << "ȥ��һ����ͷ�Ϊ" << min << endl;
	cout << "�ø������ĵ÷�Ϊ:" << (sum - max - min) / 8 << endl;
	system("pause");
	return 0;
}
