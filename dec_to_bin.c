#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
	{
		long long temp,bin=0,i,j=1,counter=0;
		long long n;
		scanf("%lld",&n);
		while(n>0)
		{
		  i=n%2;
		  bin=bin+i;
		  n=n/2;
     	}
     	printf("%d",bin);
     	getch();
	}
