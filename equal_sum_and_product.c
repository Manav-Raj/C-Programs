#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int N,i,j,s=0,p=1,count=0;
		scanf("%d",&N);
		int A[N-1];
		for(i=0;i<N;i++)
		  scanf("%d",&A[i]);
		  for(i=0;i<N;i++)
		  {
		  	for(j=i;j<N;j++)
		  	{
		  		s=s+A[j];
		  		p=p*A[j];
		  		if(s==p)
		  		 count++;
			  }
			  s=0;
			  p=1;
		  }
		  printf("%d",count);
		  printf("\n");
	}
	return 0;
}
