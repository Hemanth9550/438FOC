#include<stdio.h>
int main()
{
	int n,i;
	printf("ENTER THE RANGE: ");
	scanf("%d",&n);
	for(i=1;i<=n;i+=2)
	{
		printf("%d",i);
	}
	return 0;
}
