#include<stdio.h>
void main()
{
	int a,b=1,i;
	printf("enter a number");
	scanf("%d",&a);
	for(i=a;i>0;i=i-1)
	{
		b=b*i;
	}
	printf("the factorial is %d",b);
}
