#include<stdio.h>
#include<conio.h>
int main()
{
	int T,i,N,A[100000],B[100000],j=0,s,C[100000],k=0,n,temp=0,z;
	scanf("%d",&T);
	while(T--!=0)
	{
		scanf("%d",&N);
		for(i=0;i<N;i++)
		{
			scanf("%d",&A[i]);
		}
		/*for(i=0;i<N;i++)
		{
			if(A[i]%2==1 || A[i]==0)
			{
			  B[j]=A[i];
			  j++;
			}
		}
		for(i=0;i<j;i++)
		{
		  for(n=i+1;n<j;n++)
		  {
		  	 if(B[i]<B[n])
		  	  {
		  		temp=B[i];
		  		B[i]=B[n];;
		  		B[n]=temp;
			 }
		  }
		}
	  	for(i=0;i<j;i++)
		{
			printf("%d ",B[i]);
		}
	   */
		for(s=j+1;s<N;s++)
		{
			if(A[s]%2==0)
			{
			  C[k]=A[s];
			  k++;
			}
		}
		for(i=0;i<s;i++)
		{
		  for(n=i+1;n<s;n++)
		  {
		  	 if(C[i]>C[n])
		  	  {
		  		temp=C[i];
		  		C[i]=C[n];;
		  		C[n]=temp;
			 }
		  }
		}
		for(z=0;z<s;z++)
		{
			printf("%d ",C[z]);
		}
		printf("\n");
	
	}
	getch();
}
