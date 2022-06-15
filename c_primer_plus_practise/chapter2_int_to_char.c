/* chapter2_int_to_char.c -- print out the ascII character coresponding to the input number */
#include<stdio.h>
int main(void)
{
	int ch_a;
	printf("Please in put a number:  ");
	scanf("%d",&ch_a);
	printf("The converted character is %c\n",ch_a);
	return 0;
}
