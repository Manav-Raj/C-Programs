#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char a[5][10],temp;
	int i,j;
	for(i=0;i<5;i++)
	{
		scanf("%s",&a[i]);
	}
	for(i=0;i<5-1;i++)
	{
		for(j=0;j<5-1-i;j++)
		{
			if(strcmp(a[j],a[j+1])>0)
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=0;i<5;i++)
	{
		printf("%s",a[i]);
	}
	getch();
}
