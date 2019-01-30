#include<stdio.h>
#include<conio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--!=0)
	{
		long long a,b,c,d;
		scanf("%lld%lld%lld",&a,&b,&c);
		//d=(a*b)%c;
		printf("%lld",((a*b)%c));
		printf("\n");
	}
	getch();
}
