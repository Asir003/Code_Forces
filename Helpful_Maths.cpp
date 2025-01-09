#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)
int main()
{
    string arr;
    cin>>arr;
    int size=arr.size();
    //cout<<size;
    sort(arr.begin(),arr.end());
    int a=size/2;
    FLI(i,a,size)
    {
        cout<<arr[i];
        if(i==(size-1))
        {
            break;
        }
            cout<<'+';
    }
    return 0;
}