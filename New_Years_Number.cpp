#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)

int find(int n)
{
    while(n>0)
    {
        if(n%2020==0 || n%2021==0 || n%4041==0)
        {
            return 1;
        }
        else
        {
            n=n-4041;
        }
    }
    return 2;
}
int main()
{
    int n,a;
    cin>>n;
    int arr[n];
    FLI(i,0,n)
    {
        cin>>a;
        int k=find(a);
        //cout<<k<<endl;
        arr[i]=k;
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