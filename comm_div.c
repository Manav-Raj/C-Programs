#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int p,q,i,a[10000],b[100000],j=0,k=0,s,count=0;
		scanf("%d%d",&p,&q);
		for(i=1;i<=p;i++)
		{
			if(p%i==0)
				a[j++]=i;
		}
		for(i=1;i<=q;i++)
		{
			if(q%i==0)
				b[k++]=i;
		}
	  
	  for(i=0;i<j;i++)
	  {
	  	for(s=0;s<k;s++)
	  	{
	  		if(a[i]==b[s])
	  		 count++;
		  }
	  }
	  printf("%d",count);
	  printf("\n");
	
	}
	return 0;
}
