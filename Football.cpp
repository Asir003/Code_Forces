#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)
int main()
{
    string arr;
    cin>>arr;
    int number=arr.size();
    int sum1=0;
    int sum0=0;
    int sum1max=0;
    int sum0max=0;
    FLI(i,0,number)
    {
        if(arr[i]=='1')
        {
            sum0=0;
            sum1++;
            if(sum1>sum1max)
            {
                sum1max=sum1;
            }
        }
        else
        {
            sum1=0;
            sum0++;
            if(sum0>sum0max)
            {
                sum0max=sum0;
            }
        }
    }
    if(sum1max>=7 || sum0max>=7)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";

    }
    return 0;
}