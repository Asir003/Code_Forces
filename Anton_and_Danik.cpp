#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)
int main()
{
    int n;
    cin>>n;
    int sum=0;
    int sam=0;
    char name;
    FLI(i,0,n)
    {
        cin>>name;
        if(name=='A')
        {
            sum++;
        }
        else
        {
            sam++;
        }
    }
    if(sum>sam)
    {
        cout<<"Anton";
    }
    else if(sum==sam)
    {
        cout<<"Friendship";
    }
    else
    {
        cout<<"Danik";
    }
    return 0;

}