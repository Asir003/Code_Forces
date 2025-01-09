#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)

int find(int a,int b,int c)
{
    if(a+b==c || b+c==a || c+a==b)
    {
        return 1;
    }
    else
    {
        return 2;
    }
}
int main()
{
    int n,a,b,c;
    cin>>n;
    int arr[n];
    FLI(i,0,n)
    {
       cin>>a>>b>>c;
       arr[i]=find(a,b,c);
    }
    FLI(i,0,n)
    {
        if(arr[i]==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}