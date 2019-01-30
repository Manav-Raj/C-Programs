#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int N,i,temp,j;
		scanf("%d",&N);
		int A[N-1];
		for(i=0;i<N;i++)
		 scanf("%d",&A[i]);
	     for(i=0;i<N;i++)
	     {
		   for(j=i+1;j<N;j++)
		   {
		 	  if(A[i]>A[j])
		 	  {
		 		temp=A[i];
		 		A[i]=A[j];
		 		A[j]=temp;
			   }
		   }
	     }
	     for(i=0;i<N;i++)
	      printf("%d ",A[i]);
		   printf("\n");
	}
	return 0;
}
