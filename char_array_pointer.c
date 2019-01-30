#include<stdio.h>
#include<conio.h>
int main()
{
	int i;
	char *p,c[100];
	p=&c;
	printf("Enter your name: ");
	scanf("%s",p);
	//printf("%s",*p);
   for(i=0;i<strlen(*p);i++)
    {
    	printf("%c",c[i]);
	}
	getch();
}
