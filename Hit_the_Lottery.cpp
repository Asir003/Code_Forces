#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)
int main()
{
    int n;
    cin>>n;
    int arr[5]={100,20,10,5,1};
    int count=0;
    int i=0;
    while(n!=0)
    {
        if(n>=arr[i])
        {
           count=count+(n/arr[i]);
           //cout<<count<<endl;
           n=n%arr[i];
        }
        i++;
    }
    cout<<count;
    return 0;
}