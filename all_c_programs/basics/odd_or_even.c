#include<stdio.h>
int main(void)
{
	int i;
	printf("Plear Enter An Arbitrary Number: ");
	scanf("%d",&i);
	if(i%2==0)
		printf("The Number Entered Is A Odd Number\n");
	else
		printf("The Number Entered Is A Even Number\n");
	return 0;
}
