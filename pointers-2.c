#include<stdio.h>
int main()
{
    double x=5.26;
    double * ptr =&x;
    double * ptr_2=ptr;
    //*ptr=10.20;
    *ptr_2=100.5;

    printf("x er value - %0.2lf\n",x);
    printf("x er value - %0.2lf\n",*ptr_2);
    printf("ptr er size - %d\n",sizeof(ptr));
    return 0;
}