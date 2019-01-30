#include<stdio.h>
#include<conio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int N,i,j,count=0;
		scanf("%d",&N);
		int A[N-1];
		for(i=0;i<N;i++)
		 scanf("%d",&A[i]);
		for(i=0;i<N;i++)
		{
			for(j=i+1;j<N;j++)
			{
			  if((A[i] ^ A[j])==0)
			    count++;	
			}
		}
		printf("%d",count);
		printf("\n");
	}
	getch();
}
