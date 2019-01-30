#include<stdio.h>
#include<conio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--!=0)
	{
		int N,A[100000],i,j,temp;
		scanf("%d",&N);
		for(i=0;i<N;i++)
		{
			scanf("%d",&A[i]);
		}
		for(i=0;i<N;i++)
		{
			for(j=0;j<N-1-i;j++)
			{
				if(A[j]>A[j+1])
				{
					temp=A[j];
					A[j]=A[j+1];
					A[j+1]=temp;
				}
			}
		}
		for(i=0;i<N;i++)
		{
			printf("%d ",A[i]);
		}
	   printf("\n");
	}
	getch();
}
