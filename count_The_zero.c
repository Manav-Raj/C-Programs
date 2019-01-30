#include<stdio.h>
#include<conio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int N,i,count=0;
		scanf("%d",&N);
		int A[N-1];
		for(i=0;i<N;i++)
		 scanf("%d",&A[i]);
		 
		for(i=0;i<N;i++)
		{
			if(A[i]==0)
			 count++;
		}
		printf("%d",count);
		printf("\n");
	}
	getch();
}
