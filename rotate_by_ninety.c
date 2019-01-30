#include<stdio.h>
#include<conio.h>
int main()
{
	int T,N,M[50][50],i,j,K[50][50],k;
	scanf("%d",&T);
	while(T--!=0)
	{
	  scanf("%d",&N);
	  k=N-1;
	  for(i=0;i<N;i++)
	  {
	    for(j=0;j<N;j++)
		{
		  scanf("%d",&M[i][j]);	
		}	
	  }	
	  
	  for(i=0;i<N;i++)
	  	{
	      for(j=0;j<N;j++)
		  {
			K[i][j]=M[j][k];
	      }
	      k--;
	    }
     for(i=0;i<N;i++)
	 {
	  for(j=0;j<N;j++)
	   {
	   	printf("%d ",K[i][j]);
	   }
     }
     printf("\n");
  }
	getch();
}
