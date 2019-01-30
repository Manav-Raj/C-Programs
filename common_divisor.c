#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int p,q,a,b,t,hcf;
		scanf("%d%d",&p,&q);
		a=p;
	    b=q;
	   while(b!=0)
	   {
		 t=b;
	     b=a%b;
		 a=t;
    	}
    	hcf=a;
    	printf("%d",hcf);
    	printf("\n");
	}
	return 0;
}
