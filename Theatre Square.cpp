#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int sum;
    int sam;
    int sum1=a%c;
    int sum2=b%c;
    int sum3=a/c;
    int sum4=b/c;
    if(sum1!=0)
    {
       sum++;
    }
    if(sum2!=0)
    {
       sam++;
    }
    int total=sum+sam+sum3+sum4;
    return 0;
}