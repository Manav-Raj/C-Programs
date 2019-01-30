#include<stdio.h>
#include<conio.h>
int main()
{
	int T,X,Y,sum=0,j=0,count1=0,count2=0,temp=0,temp1=0;
	scanf("%d",&T);
	while(T--!=0)
	{
		scanf("%d%d",&X,&Y);
		sum=(X+Y);
		temp=sum;
		temp1=X;
	    while(temp!=0)
	    {
	    	count1++;
	    	temp=temp/10;
		}
		while(temp1!=0)
		{
			count2++;
			temp1=temp1/10;
		}
		if(count1==count2)
		{
			printf("%d",sum);
		}
		else if(count1!=count2)
		{
			printf("%d",X);
		}
		printf("\n");
	}
	getch();
	
}
