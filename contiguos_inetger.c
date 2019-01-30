#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int n,i,j,temp,count,flag=0;
		scanf("%d",&n);
		int a[n-1];
		for(i=0;i<n;i++)
		  scanf("%d",&a[i]);
		for(i=0;i<n;i++)
		{
		  for(j=i+1;j<n;j++)
		  {
		  	 if(a[i]>a[j])
		  	 {
		  		temp=a[i];
		  		a[i]=a[j];
		  		a[j]=temp;
			  }
		   } 
		}
		j=a[0];
		for(i=0;i<n;i++)
		{
			if(a[i]==j || a[i]==j+1)
			 count++;
			else
			  flag=1;
		}
		if(flag==1)
		  printf("No");
		else
		 printf("Yes");
		printf("\n");
	}
	return 0;
}
