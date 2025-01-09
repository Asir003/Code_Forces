#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)

int main()
{
    int n, s, count[5]= {0};
    cin>>n;
    FLI(i,0,n)
    {
        cin>>s;
        count[s]++;
    }
    int total=count[4]+count[3]+count[2]/2;
    count[1]=count[1]-count[3];
    if(count[2]%2==1)
    {
        total++;
        count[1]-=2;
    }
    if(count[1]>0)
    {
        total+=(count[1]+3)/4;
    }
    cout<<total;
    
    return 0;
}