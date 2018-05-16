#include<iostream>
using namespace std;

int main(void)
{
	int flag,maxj,m;
			int i,j,k;
			int **b;
	cout << "输入要测试数组的行数:" << endl;
	int row;
	cin >> row;
	cout << "输入要测试数组的列数:" << endl;
	int col;
	cin >> col;
	cout << "输入数组元素:" << endl;
	b=new int*[row];
	for (i = 0; i < row; i++)
	{//为指针数组的每个元素分配一个数组
	 b[i]=new int[col+1];
	 for(j=0;j<col;j++){
	  cin >> b[i][j];
	}
}
cout << "该数组为:" << endl;
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
			//用for循环语句找第i行的最大值存放在m中
			for(j=0;j<col;j++)
				if(m<b[i][j])
				{m=b[i][j];
				maxj=j;
				}
			flag=1;
			//m不是该行的最大元素
	
			for(k=0;k<row;k++)
				if(m>b[k][j])
				{flag=0;
				continue;}
			
			if(flag)
			{
				cout<<"数组中的鞍点是"<<m<<"位置是："<<"第"<<i+1<<"行"<<"第"<<maxj+1<<"列"<<endl;
				break;
			}
		}
		
			if(!flag) cout<<"没有鞍点"<<endl;	
	return 0;
	system("pause");
}