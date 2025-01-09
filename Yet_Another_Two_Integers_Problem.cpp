#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)

int find(int c)
{
    int arr[10]={10,9,8,7,6,5,4,3,2,1};
    int i=0;
    int sum=0;
    int k;
    while(c>0)
    {
        if(c<arr[i])
        {
            i++;
        }
        else
        {
         k=c%arr[i];
        sum=sum+(c/arr[i]);
        c=k;
        }
    }
    return sum;
}
int main()
{
    int n,a,b;
    cin>>n;
    int arr[n];
    FLI(i,0,n)
    {
        cin>>a>>b;
        int c=a>b ? (a-b):(b-a);
        arr[i]=find(c);
    }
    FLI(i,0,n)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}