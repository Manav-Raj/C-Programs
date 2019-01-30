#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int N;
		scanf("%d",&N);
		int A[N-1],i,j,s=0,count=0;
		for(i=0;i<N;i++)
		 scanf("%d",&A[i]);
		for(i=0;i<N;i++)
		{
			for(j=i;j<N;j++)
			{
			   s=s+A[j];
			   if(s%2==0)
			    count++;
			}
			s=0;
		 }
		 printf("%d",count);
		 printf("\n");
	}
	return 0;
}
