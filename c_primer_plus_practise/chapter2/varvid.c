/* varwid.c--asterisk acts as a variable. */
#include <stdio.h>
int main (void)
{
    float a;
    int b;
    printf("Please input a float number\n");
    scanf("%f",&a);
    printf("Please input how many numbers after dot\n");
    scanf("%d",&b);
    printf("the result is %.*f\n",b,a);
    return 0;
}
