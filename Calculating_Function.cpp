#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)
int main()
{
    long long num;
    cin>>num;
    if(num%2==0)
    {
        long long data=(num*(2+num))/4;
        long long data1=(num*num)/4;
        cout<<data-data1;
    }
    else
    {
        long long data=((num/2)*(num+1))/2;
        long long data1=(((num/2)+1)*(num+1))/2;
        cout<<data-data1;
    }
    return 0;
}