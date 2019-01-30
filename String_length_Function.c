int strlen(char A[])
{
	int length=0;
	while(A[length]!='\0')
	{
		length++;
	}
	return(length);
}
void main()
{
	char c[20];
	int i;
	printf("Enter any value: ");
	scanf("%s",&c);
	i=strlen(c);
	printf("%d",i);
	getch();
}
