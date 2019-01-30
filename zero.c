#include<stdio.h>
#include<conio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--!=0)
	{
		int R,C,i,j,M[100][100],count=0,index=0,max=0;
		scanf("%d%d",&R,&C);
		for(i=0;i<R;i++)
		{
			for(j=0;j<C;j++)
			{
				scanf("%d",&M[i][j]);
			}
		}
	    
		for(i=0;i<R;i++)
		{
			for(j=0;j<C;j++)
			{
		      if(M[i][j]==1)
		      {
		      	count++;
			  }
		   }
	        while(count>max)
	       {
	    	max=count;
	    	count=0;
	    	index=i;
		   }
	    }
	  printf("%d",i);
	  printf("\n");
   }
   getch();
}
