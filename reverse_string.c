int main() {
	int test,m,n;
	scanf("%d",&test);
	for(m=0;m<test;m++)
	{
	    char str[1000];
	    scanf("%s",str);
	    n = strlen(str);
	    int i,j=0,k=0;
	    for(i=0;i<n;i++)
	    {
	        if(str[i]=='.')
	        {
	            for(j=i-1;j>=k;j--)
	            {
	                printf("%c",str[j]);
	            }
	           k = i+1;
	           printf(".");
	        }
	    }
	    for(i=strlen(str)-1;i>=k;i--)
	    {
	        printf("%c",str[i]);
		}
	    printf("\n");
	}
	return 0;
}
