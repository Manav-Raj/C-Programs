#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char s1[10000];
	int i,c=0;
	printf("Enter the string ");
	scanf("%s",&s1);
	c=maxLength(s1);
	printf("%d",c);
	getch();
}
int maxLength(char* s)
{
	int j,i,count=0,temp=0;
	j=strlen(s);
	for(i=0;i<j;i++)
	{
      if(s[i]=='1')
      {
      	count++;
	  }
	  else
	  {
	  	if(count>temp)
	  	 {
	  		temp=count;
		 }
		 count=0;
	  }
   }
	return temp;
  }
