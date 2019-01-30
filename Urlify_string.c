#include<stdio.h>
#include<conio.h>
int main()
{
	int T,K,i,ch='%';
	char S[10000];
	scanf("%d",&T);
	while(T--!=0)
	{
		scanf("%s",&S);
		scanf("%d",&K);
	    K=strlen(S);
	 for(i=0;i<K;i++)
	  {
	  	if(S[i]==' ')
	  	{
	  		printf("%c",ch);
	  		printf("%c","20");
		}
		else
		{
			printf("%c",S[i]);
		}
    }
    printf("\n");
   }
	getch();
}
