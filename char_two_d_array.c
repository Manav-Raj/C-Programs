#include<stdio.h>
#include<conio.h>
int main()
{
	char a[10][10];
	int i,j;
	for(i=0;i<5;i++)
	{
		scanf("%s",&a[i]);
	}
	 printf("After insertion of value\n");
	for(i=0;i<5;i++)
	  {
	  	printf("%s\n",a[i]);
      }
    getch();
	  	
}
