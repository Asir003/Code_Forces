#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)

int main()
{
    int n,a,b,c;
    cin>>n;
    string arr[n];
    FLI(i,0,n)
    {
        cin>>a>>b>>c;
        if(a+b==c)
        {
           arr[i]='+';
        }
        else
        {
           arr[i]='-';
        }
    }
    FLI(i,0,n)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}