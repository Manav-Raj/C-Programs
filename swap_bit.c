#include<stdio.h>
#include<conio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--!=0)
	{
		int N,i,A[100],count=0,temp=0;
		scanf("%d",&N);
		while(N>0)
		{
		   A[count]=N%2;
		   count++;
		   N=N/2;
	    }
	    count--;
		while(count>=0)
		{
		    if(A[count]==1)
		    {
		    	temp++;
			}
			count--;
		}
		printf("%d",temp);
		printf("\n");
	}
	getch();
}
