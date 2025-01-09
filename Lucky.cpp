#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)

int main()
{
    int n;
    cin>>n;
    string arr;
    FLI(i,0,n)
    {
        cin>>arr;
        if(arr[0]+arr[1]+arr[2]==arr[3]+arr[4]+arr[5])
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
    }
    return 0;
}