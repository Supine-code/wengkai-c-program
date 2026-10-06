#include<stdio.h>
int main()
{
	const int AMOUNT = 100;
	int a = 0;
	printf("请输入金额\n");
	scanf("%d",&a);
	int change = AMOUNT-a;
	printf("找您%d",change);
	return 0;
}
