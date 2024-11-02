#include<stdio.h>
int main()
{
    int ar[5]={10,20,30,40,50};
    printf("0th index er add= %p\n",&ar[0]);
    printf("0th index er add= %p\n",&ar);

    printf("0th index er value=%d\n",ar[1]);
    printf("0th index er value=%d\n",*(ar+1));
    printf("0th index er value=%d\n",*(1+ar));
    printf("0th index er value=%d\n",1[ar]);
    return 0;
}