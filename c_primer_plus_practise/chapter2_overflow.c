/* chapter2_overflow.c -- check out overflow on various types*/
#include<stdio.h>
#include<float.h>
#include<limits.h>
int main(void)
{
    unsigned int uni_a =4294967295;
    float fl_b=3.40282347e38f;
    printf("Overflow of unsigned int,display the maximum int number 4294967295 plus 1, and the reslut is %u \n",uni_a+1);
    printf("the maximum value for a positive float is %e\n",FLT_MAX);
    printf("Overflow of float,display the maximum float number 3.40282347e38f plus 0.1e38f, and the reslut is %e\n",fl_b+0.1e38f);
    return 0;
}
