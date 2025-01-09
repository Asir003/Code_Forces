#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)
int main()
{
    int n;
    cin>>n;
    int arr[n];
    FLI(i,0,n)
    {
        cin>>arr[i];
    }
    FLI(i,0,n)
    {
        if(arr[i] >=1900)
        {
            cout<<"Division 1"<<endl;
        }
        else if(arr[i]>=1600 && arr[i]<=1899)
        {
            cout<<"Division 2"<<endl;
        }
        else if(arr[i]>=1400 && arr[i]<=1599)
        {
            cout<<"Division 3"<<endl;
        }
        else{
            cout<<"Division 4"<<endl;
        }
    }
    return 0;
}