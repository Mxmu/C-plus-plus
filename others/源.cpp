#include<iostream>
using namespace std;

int main(void)
{
	int flag,maxj,m;
			int i,j,k;
			int **b;
	cout << "����Ҫ�������������:" << endl;
	int row;
	cin >> row;
	cout << "����Ҫ�������������:" << endl;
	int col;
	cin >> col;
	cout << "��������Ԫ��:" << endl;
	b=new int*[row];
	for (i = 0; i < row; i++)
	{//Ϊָ�������ÿ��Ԫ�ط���һ������
	 b[i]=new int[col+1];
	 for(j=0;j<col;j++){
	  cin >> b[i][j];
	}
}
cout << "������Ϊ:" << endl;
for ( i = 0; i < row; i++)
{
  for ( j = 0; j < col; j++)
  {
    cout << b[i][j] << " ";
  }
  cout << endl;
}
		
		for(i=0;i<row;i++)
		{	
			m=b[i][0];
			maxj=0;
			//��forѭ������ҵ�i�е����ֵ�����m��
			for(j=0;j<col;j++)
				if(m<b[i][j])
				{m=b[i][j];
				maxj=j;
				}
			flag=1;
			//m���Ǹ��е����Ԫ��
	
			for(k=0;k<row;k++)
				if(m>b[k][j])
				{flag=0;
				continue;}
			
			if(flag)
			{
				cout<<"�����еİ�����"<<m<<"λ���ǣ�"<<"��"<<i+1<<"��"<<"��"<<maxj+1<<"��"<<endl;
				break;
			}
		}
		
			if(!flag) cout<<"û�а���"<<endl;	
	return 0;
	system("pause");
}