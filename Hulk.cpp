#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)
int main()
{
    int n;
    cin>>n;
    string arr2="I hate";
    string arr1="I love";
    string arr3="it";
    string arr4="that";
    FLI(i,1,n+1)
    {
        if(i%2==0)
        {
            if(i==n)
            {
                cout<<arr1<<" "<<arr3;
            }
            else
            {
            cout<<arr1<<" "<<arr4;
            }
        }
        else
        {
            if(i==n)
            {
                cout<<arr2<<" "<<arr3;
            }
            else
            {
            cout<<arr2<<" "<<arr4;
            }
        }
        cout<<" ";
    }

     return 0;
}