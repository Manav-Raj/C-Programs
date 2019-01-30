#include<stdio.h>
#include<conio.h>
int main()
{
   int T;
   scanf("%d",&T);
   while(T--!=0)
   {
     int N,A[100000],K,i,pos=0,flag=0;
	 scanf("%d",&N);
	 for(i=0;i<N;i++)
	 {
	 	scanf("%d",&A[i]);
     }
     scanf("%d",&K);
    for(i=0;i<N;i++)
    {
    	if(A[i]==K)
    	{
    		pos=i;
    		flag=1;
    		break;
		}		
	}
	if(flag==0)
	{
		printf("-1");
	}
	else
	{
		printf("%d",pos);
	}
	
   printf("\n");
   }
   getch();	
}
