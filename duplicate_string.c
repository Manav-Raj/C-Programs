#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--!=0)
	{
		char s[10000],d[10000];
		int i,j,k=0,flag=1;
		scanf("%s",&s);
		for(i=0;i<strlen(s);i++)
		{
			for(j=0;j<strlen(s);j++)
			{
		        if(s[i]==s[j])
		        {
		        	flag=1;
				}
		    }
			if(flag==1)
			{
			  while(j==0 && j<=k)
			  {
			    if(d[j]!=s[i])
			     {
				   d[k++]=s[i];
		         }
		         j++;
		       }
			}
	   }
		for(i=0;i<k;i++)
		{
			printf("%c",d[i]);
		}
		printf("\n");
	}
	getch();
}
