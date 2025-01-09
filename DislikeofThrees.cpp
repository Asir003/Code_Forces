#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)

int main()
{
    int arr[1000];
    int k=1;
    FLI(i,0,1000)
    {
        if(k%3!=0 && k%10!=3)
        {
            arr[i]=k;
        }
        else
        {
            i--;
        }
        k++;
    }
    int n;
    cin>>n;
    int arr1[n];
    int b;
    FLI(i,0,n)
    {
        cin>>b;
        arr1[i]=arr[b-1];
    }
    
    FLI(i,0,n)
    {
        cout<<arr1[i]<<endl;
    }
    return 0;
}
