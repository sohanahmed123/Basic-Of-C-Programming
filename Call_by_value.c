#include<stdio.h>
void fun(int*p)
{
    *p=200;
    printf("fun er value - %d\n",*p);
}
int main()
{
    int x=10;
    //printf("Main x er address - %p\n",&x);
    fun(&x);
    printf("main x er value - %d\n",x);
    return 0;
}