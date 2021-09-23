#include <stdio.h>
#define N 3
double price(double duration)
{
    int a=int (duration);
    double p;
    if(duration<=3)
    {
        return 2;
    }
    else if(duration>18)
    {
        p=10;
    }
    else
    {
        if(a==duration)
        {
            p=(a-3)*0.5+2;
        }
        else
        {
            p=(a-2)*0.5+2;
        }
    }

    return p;
}
int main()
{
    double arr[N];
    double sum1=0.0f,sum2=0.0f;
    int i;
    for(i=0;i<N;i++)
    {
        scanf("%lf",&arr[i]);
    }
    printf("Car\tHours\tCharge\n");
    for(i=0;i<N;i++)
    {
        printf("%d\t%2.1lf\t%.2lf\n",i+1,arr[i],price(arr[i]));
        sum1+=arr[i];
        sum2+=price(arr[i]);
    }
    printf("Total: \t%2.1lf\t%.2lf\n",sum1,sum2);
    return 0;
}