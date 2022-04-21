#include <stdio.h>
int main()
{
    int a,b,c,d,e,f;
    printf("plase enter no: ");
    scanf("%i",&a);
    b=(a%10);
    c=(a/10)%10;
    d=(a/100)%10;
    e=(a/1000)%10;
    f=(a/10000)%10;
    a=(b*10000)+(c*1000)+(d*100)+(e*10)+f;
    printf("The new no is %i",a);
    return 0;
}