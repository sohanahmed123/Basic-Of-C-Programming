#include<stdio.h>
//  return_type name(parameter)
//     {
//         code;
//         return what;
//     }
int sum(int x,int y) //x=10 y=20
{
    //code
    int sum=x+y;
    return sum;
}
int main()
{
    int a=sum(10,20);
    printf("%d",a);
    return 0;
}