#include<stdio.h>
int main(void)
{
	int i;
	int j;
	printf("Please Enter a Number\n");
	scanf("%d",&j);
	for(i=0;i<=j;i++)
	{
		if(i%2==0)
		printf("%d\n",i);
	}
	return 0;
	
}
