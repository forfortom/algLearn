//勇者斗恶龙
#include <cstdio>
#include<algorithm>
#include<iostream>
using namespace std;

const int maxn =20000+5;
int A[maxn],B[maxn];

int main()
{
	int n,m;
	while(scanf("%d%d",&n,&m)==2 && n && m)
	{
		for(int i =0; i<n;i++)
			scanf("%d",&A[i]);
		for(int i =0;i<m;i++)
			scanf("%d",&B[i]);
		//'''
		//	在algorithm中sort函数
		//	 1、sort函数的时间复杂度为n*log2(n)，执行效率较高。
		//	  2、sort函数的形式为sort（first，end，method），其中第三个参数可选。
		//	 3、若为两个参数，则sort的排序默认是从小到大，
		//	 若为三个参数，需要一个bool函数作为第三个值
		//	 比如　：
		//	 bool cmp(int a,intb){
		//		 return b
		//	 }
		//	第三个参数为cmp无需参数

		//'''
		
		sort(A,A+n);
		sort(B,B+m);
		int cur =0;
		//当前头的编号
		int cost =0;	
		//当前花费
		for(int i =0;i<m;i++)
			if(B[i] >= B[cur])
			{
				cost += B[i];
				if(++cur == n) break;

			}		
		if(cur < n ) 
			printf(("Lowwater is doomed!\n"));
		else
			printf("%d\n",cost);
	}
















	return 0;
}
