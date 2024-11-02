#include<stdio.h>
int main()
{
    
    int a,b,result=1;
    scanf("%d",&a);
    for(b=1;b<=12;b++)
    {
        result=a*b;
        printf("%d * %d = %d\n",a,b,result);
        result++;
        
    }
    printf("\n");
    return 0;
}