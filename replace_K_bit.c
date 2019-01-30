#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--!=0)
	{
		int n,k,temp1,count=0,A[10000],B[10000],i=0;
		scanf("%d%d",&n,&k);
		temp1=n;
	  while(temp1!=0)
	  {
	    A[count]=temp1%2;
	    temp1=temp1/2;
	    count++;
	  }
	 count--;
	 while(count>=0)
     {
    	B[i]=A[count];
    	i++;
    	count--;
	 }
	 i='\0';
	for(i=0;i!='\0';i++)
	{
     printf("%d",B[i]);
	}
}
	getch();
}
