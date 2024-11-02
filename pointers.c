#include<stdio.h>
int main()
{
    int x=100;
    int * ptr =&x;
    x=200;
    // printf("%p\n",&x);
    // printf("%p\n",ptr);
    // printf("%p\n",&ptr);
    // printf("%d\n",sizeof(ptr));
    printf("%d\n",x);
    printf("%d\n",*ptr);

    return 0;
}
