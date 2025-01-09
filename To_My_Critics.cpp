#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)

void find(int arr[])
{
    sort(arr,arr+3);
    if(arr[2]+arr[1]>=10 ||arr[2]+arr[0]>=10)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}

int main()
{
    int n,a,b,c;
    cin>>n;
    int arr[3];
    FLI(i,0,n)
    {
        cin>>a>>b>>c;
        arr[0]=a;
        arr[1]=b;
        arr[2]=c;
        find(arr);

    }
}