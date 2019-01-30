#include<stdio.h>
#include<conio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--!=0)
	{
		int N,A[100000],i,j,count=0,item;
		scanf("%d",&N);
		for(i=0;i<N;i++)
		{
			scanf("%d",&A[i]);
		}
		for(i=0;i<N;i++)
		{
			for(j=0;j<N;j++)
			{
			  if(A[i]==A[j])
			  {
			  	count++;
			  }
		    }
		    if(count==1)
		    {
		    	item=A[i];
		    	printf("%d",item);
			}
		   count=0;
	    }
	   printf("\n");
	}
	getch();
}
