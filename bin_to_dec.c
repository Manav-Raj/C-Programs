#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
	{
		int n,temp,dec=0,inc=0,i;
		scanf("%d",&n);
		temp=n;
		while(temp!=0)
		{
		  i=temp%10;
		  dec=dec+(i*pow(2,inc));
		  temp=temp/10;
		  inc++;	
     	}
     	printf("%d",dec);
     	getch();
	}
