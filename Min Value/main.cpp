#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,a[100],num=0,sum,ni,nj;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sum=fabs(a[0]+a[1]);
    ni=0;nj=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(i!=j)
            {
                num=a[i]+a[j];
                num=fabs(num);
                if(sum>num)
                {
                    sum=num;
                    ni=i;
                    nj=j;
                }
            }
        }
    }
    cout<<sum<<" "<<ni+nj+2;
    return 0;
}