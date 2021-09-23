#include<stdio.h>
int main(void)
{
    double a=6.3;
    int b=int(a);
    if(b==a)
    {
        printf("1");
    }
    else
    {
        b=b+1;
        printf("%d",b);
    }
    //printf("%d",b);

    return 0;
}