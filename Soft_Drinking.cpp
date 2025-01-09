#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)

int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int arr[3];
     arr[0]=(k*l)/nl;
     arr[1]=p/np;
     //cout<<arr[1]<<endl;
     arr[2]=c*d;
     int max=arr[0];
     FLI(i,0,3)
     {
        if(arr[i]<=max)
        {
            max=arr[i];
        }
     }
     //cout<<max<<endl;
     int a=max/n;
     cout<<a;
     return 0;
}