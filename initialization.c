#include<stdio.h>
int main()
{
    char a[]="sohan";
    int sz=sizeof(a)/sizeof(char);
    printf("%s\n",a);
    printf("%d",sz);
    return 0;
}