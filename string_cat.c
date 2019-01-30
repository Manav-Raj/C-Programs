#include<stdio.h>
#include<conio.h>
int main()
{
	int T,i,j,k;
	char s1[100000],s2[100000];
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
		scanf("%s",&s1);
		scanf("%s",&s2);
	   for(j=0;j<strlen(s1);j++)
	   {
	   	  if(s1[j]==s1[j+1])
	   	  {
	   	  	s1[j+1]=s1[j+2];
		  }
	   }
	  	 for(k=0;k<strlen(s2);k++)
	  	 {
	  	 	if(s2[k]==s2[k+1])
	  	 	{
	  	 	  s2[k+1]=s2[k+2];
			}
		 }
		 printf("%s\n",s1);
		 printf("%s\n",s2);
		 getch();
	}
}
