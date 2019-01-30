#include<stdio.h>
#include<conio.h>
void strrev(char A[])
{
	char temp;
	int i,n;
	n=strlen(A);
	for(i=0;i<n/2;i++)
	{
		temp=A[i];
		A[i]=A[n-1-i];
		A[n-1-i]=temp;
	}
}
int main()
{
	char a[100];
	printf("Enter any value: ");
	scanf("%s",&a);
	strrev(a);
	printf("%s",a);
	getch();
}
