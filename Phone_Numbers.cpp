#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)

int main()
{
    int n;
    cin>>n;
    string arr;
    cin>>arr;
    int count=0;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]=='8')
        {
            count++;
        }
    }
    //cout<<count<<endl;
    int m=n/11;
    if(count>m)
    {
        cout<<m;
    }
    else
    {
        cout<<count;
    }
    return 0;

}