#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)
int main()
{
    string arr;
    string arr1;
    cin>>arr>>arr1;
    int num=arr.size();
    FLI(i,0,num)
    {
        if(arr[i]==arr1[i])
        {
            cout<<"0";
        }
        else
        {
            cout<<"1";
        }
    }
    return 0;
}