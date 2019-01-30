#include<stdio.h>
#include<conio.h>
int main()
{
	int T,K,i,j;
	char S[10000];
	scanf("%d",&T);
	while(T--!=0)
	{
		scanf("%s",&S);
		scanf("%d",&K);
		K=strlen(S);
	  for(i=0;i<K-1;K++)
	  {
	  	if(S[i]==" ")
	  	{
	  	  S[i]="%20";
	  	  print("%c",S[i]);
		}
		i=i+1;
	  }
	 for(j=0;j!='\0';j++)
	 {
	   printf("%c",S[j]);
     }
	}
	getch();
}
