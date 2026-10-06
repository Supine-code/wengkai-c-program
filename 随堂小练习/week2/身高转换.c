#include<stdio.h>
int main(void) 
{
	double a,b;
	scanf("%lf %lf",&a,&b);
	double c = (a+b/12.0)*0.3048;
	printf("%lf",c);
	return 0;
}
