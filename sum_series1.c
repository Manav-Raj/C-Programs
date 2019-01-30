#include<stdio.h>
#include<conio.h>
int main()
{
	int i;
	float n,sum=0;
	printf("Enter the number: ");
	scanf("%f",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+(float)1/i;
	}
	printf("value of \n");
	for(i=1;i<=n;i++)
	{
		if(i<n)
		{
			printf("1/%d+",i);
		}
		else
		{
			printf("1/%d = ",i);
		}
	}
    printf("%f",sum);
	getch();
}
