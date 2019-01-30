#include <stdio.h>
#include<conio.h>
int main() 
{
	int T,N,X,A[100000],i,j,count=0;
	scanf("%d",&T);
	while(T--!=0)
	{
	     scanf("%d",&N);
	     for(i=0;i<N;i++)
	     {
	        scanf("%d",&A[i]);
	     }
	        scanf("%d",&X);
	     for(j=0;j<N;j++)
	     {
	         if(A[j]<=X)
	        {
	           count++;
	        }
	     }
	       printf("%d\n",count);
	       count=0;
    }
    getch();
}
