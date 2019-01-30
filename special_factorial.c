#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int x,fact=1,i=1,val,flag=0,temp;
		scanf("%d",&x);
		temp=i;
		while(temp!=0)
		{
		   fact=fact*temp;
		   temp--;
	    }
		   if(fact%x==0)
		   {
		     val=i;	
		     flag=1;
		     break;
		   }
		   else
		   {
			  i++;
		   }
	   if(flag==1)
	    printf("%d",val);
	    printf("\n");
	}
	return 0;
}
