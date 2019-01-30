#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int N,i,count=0,val,j;
		scanf("%d",&N);
		int A[N-1];
		for(i=0;i<N;i++)
		 scanf("%d",&A[i]);
		for(i=0;i<N;i++)
		{
		for(j=0;j<N;j++)
		 {
		 	if(A[i]==A[j])
		 	  count++;
		 }
		 if(count%2==1)
		  val=A[i];
		count=0;
	    }
		printf("%d",val);
		printf("\n");
	}
	return 0;
}
