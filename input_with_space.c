#include<stdio.h>
#include<string.h>
int main()
{
    char a[12];
    fgets(a,13,stdin);
    a[11]='\0';
    int lenth=strlen(a);
    printf("%d\n",lenth);
    printf("%s\n",a);
    int sz=sizeof(a);
    printf("%d",sz);
    return 0;
}