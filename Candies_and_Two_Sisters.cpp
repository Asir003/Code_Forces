#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)

int main()
{
   int n,a;
   cin>>n;
   int arr[n];
   FLI(i,0,n)
   {
      cin>>a;
      if(a%2==0)
      {
        arr[i]=(a/2)-1;
      }
      else
      {
        arr[i]=a/2;
      }
   }
   FLI(i,0,n)
   {
    cout<<arr[i]<<endl;
   }
   return 0;
}