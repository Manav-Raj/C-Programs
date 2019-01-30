#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int N,K,s=0;
		scanf("%d%d",&N,&K);
		int A[N-1],i,count=0,j;
		for(i=0;i<N;i++)
		 scanf("%d",&A[i]);
		for(i=0;i<N;i++)
		{
			for(j=i+1;j<N;j++)
			{
				s=A[i]+A[j];
				if(s==K)
				 count++;
			}
			s=0;
		}
		printf("%d",count);
		printf("\n");
	}
	return 0;
}
