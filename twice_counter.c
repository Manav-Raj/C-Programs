#include<stdio.h>
#include<string.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int i,n,count,val=0,j;
		scanf("%d",&n);
		char S[n][1000];
		for(i=0;i<n;i++)
		 scanf("%s",&S[i]);
		for(i=0;i<n;i++)
		{
		  count=1;
		   for(j=0;j<n;j++)
		    {
			  if(i!=j && strcmp(S[i],S[j])==0)
			     count++;
	     	}
	       if(count==2)
	       	 val++;
	    }
		printf("%d",val);
		printf("\n");
	}
	return 0;
}
