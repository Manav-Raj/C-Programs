#include<stdio.h>
#include<conio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int N,M,i,j=0;
		scanf("%d%d",&N,&M);
		int a1[N],a2[M],c[10000],k=0,l=0;
		for(i=0;i<N;i++)
		 scanf("%d",&a1[i]);
		for(i=0;i<M;i++)
		 scanf("%d",&a2[i]);
		 i=0;
         for(j=0;j<M;j++)
		{
		  	i=0;
		    while(i<N)
		  	{
		  	   if(a2[j]==a1[i])
		  	   {
		  	     c[k]=a1[i];
				  k++;	
			   }
			   i++;
		    }
		}
		 for(j=0;j<k;j++)
		 	printf("%d ",c[j]);
		 printf("\n");
	}
	getch();
}
