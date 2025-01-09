#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)

int main()
{
    string arr;
    cin>>arr;
    int size=arr.size();
    int arr1[size];
    int count=0;
    int k=0;
    FLI(i,0,size)
    {
        if(arr[i]=='.')
        {
            arr1[k]=0;
            count++;
        }
        else
        {
            if(arr[i+1]=='.')
            {
                arr1[k]=1;
                i++;
                count++;
            }
            else if(arr[i+1]=='-')
            {
                arr1[k]=2;
                i++;
                count++;
            }
        }
        k++;
    }
    FLI(i,0,count)
    {
        cout<<arr1[i];
    }
    return 0;
}