#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    fgets(a,6,stdin);
    printf("%s",a);
    return 0;
}