#include<stdio.h>
int main()
{
	int i,n;
	printf("enter value of n=");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
		printf("\t%d",i);
		k=k+i;
		}
	}
	if(k==n)
	printf("\nyes %d is perfect number",k);
	else
	printf("\n%d is imperfect",n);
	return 0;
}
