#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int T,N,M,i,j;
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
		scanf("%d %d",&N,&M);
	   if(N>0)
	   {
		for(j=N;j>0;j--)
		{
		  	if(j%M==0)
			{
				printf("%d\n",j);
				break;
			}
	     }
	   }
	   if(N<0)
	   {
	    for(i=abs(N);i<1000;i++)
	     {
	      if(i%M==0)
		   printf("%d\n",-i);
		   break;
	     }   
	   }
		   
	}
	getch();
}
