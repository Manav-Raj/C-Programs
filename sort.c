#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--!=0)
	{
	  int A[10000],N,temp,i,j;
	  scanf("%d",&N);
	   for(i=0;i<N;i++)
	   {
		scanf("%d",&A[i]);
	   }
	 
	   for(i=1;i<N;i++)
	   {
		  temp =A[i];
		  j=i-1;
		  while(temp<A[j] && j>=0)

		 {
			A[j+1] = A[j];
			--j;
		}
		  A[j+1]=temp;
	}
	 for(i=0;i<N;i++)
	  {
        printf("%d ",A[i]);
	  }
	 printf("\n");
   }
    return 0;
}
