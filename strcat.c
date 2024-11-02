#include<stdio.h>
int main()
{
    char a[200],b[100];
    scanf("%s %s",a,b);
    strcat(a,b);
    printf("%s %s",a,b);
    return 0;
}