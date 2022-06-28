#include<stdio.h>
int main(void)
{
	int a=1;
	int b=2;
	int c;
	c=a;
	a=b;
	b=c;
	printf("ais %d,b is %d\n",a,b);
	return 0;
}
