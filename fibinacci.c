#include<stdio.h>

int main()
{
	int n,sum,i;
	int a=0,b=1;
	
	printf("Enter number : ");
	scanf("%d",&n);
	
	printf("%d %5d",a,b);
	for( i=2; i<=n; ++i)
	{
		sum=a+b;
		a=b;
		b=sum;
		printf("%5d",sum);
	}
	return 0;
}
