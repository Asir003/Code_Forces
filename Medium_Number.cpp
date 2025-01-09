#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)

int find(int arr[])
{
    sort(arr,arr+3);
    return arr[1];
}
int main()
{
    int n,a,b,c;
    cin>>n;
    int arr[n];
    int num[3];
    FLI(i,0,n)
    {
       FLJ(j,0,3)
       {
          cin>>num[j];
       }
       arr[i]=find(num);

    }
    FLI(i,0,n)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}