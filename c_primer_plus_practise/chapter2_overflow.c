/* chapter2_overflow.c -- check out overflow on various types*/
#include<stdio.h>
#include<float.h>
#include<limits.h>
int main(void)
{
    unsigned int uni_a =4294967295;
    float fl_b=3.40282347e38f;
    float fl_c=1.175494e-38f;
    printf("Overflow of unsigned int,display the maximum int number 4294967295 plus 1, and the reslut is %u \n",uni_a+1);
    printf("the maximum value for a positive float is %e\n",FLT_MAX);
    printf("Overflow of float,display the maximum float number 3.40282347e38f plus 0.1e38f, and the reslut is %e\n",fl_b+0.1e38f);
    printf("the minimum value for a positive float is %e\n",FLT_MIN);
    printf("the minimum value for a positve float 1.175494e-38 divided by 2, the reslut is %e\n",fl_c/2);
    printf("the minimum value for a positve float 1.175494e-38 divided by 128, the reslut is %e\n",fl_c/128);
    return 0;
}
