#include<stdio.h>
#include<math.h>
int main()
{
	int a;
	int n = 0,b = 10,c = 1;
	scanf("%d",&a);
	for(;b>=10;n++)
	{
		c = pow(10,n);
		b = a/c;
	}
	printf("%d\n",n);
	return 0;
}