#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)

int find(int arr[],int a)
{
    int count=0;
    FLI(i,0,a-1)
    {
        if(arr[i+1]-arr[i]==1 || arr[i+1]-arr[i]==0)
        {
            count++;
        }
       
    }
    return count;
}
int main()
{
    int n,a;
    cin>>n;
    int poss[n];
    FLI(i,0,n)
    {
        cin>>a;
        int arr[a];
        FLI(i,0,a)
        {
            cin>>arr[i];
        }
        if(a==1)
        {
           poss[i]=1;
        }
        else
        {
            sort(arr,arr+a);
            int k=find(arr,a);
            int l=a-k;
            if(l==1)
            {
                poss[i]=1;
            }
            else
            {
                poss[i]=2;
            }
        }
    }
    FLI(i,0,n)
    {
        if(poss[i]==1)
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