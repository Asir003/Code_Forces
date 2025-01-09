#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)

int main()
{
    int n;
    cin>>n;
    int arr1[n]={0};
    char arr[7]={'c','o','d','e','f','r','s'};
    //int count=0;
    char b;
    FLI(i,0,n)
    {
       cin>>b;
       FLJ(j,0,7)
       {
            if(arr[j]== b)
            {
                arr1[i]=1;
                break;
            }
       }
       
          //arr1[i]=0;
    }
    FLI(i,0,n)
    {
        if(arr1[i]==1)
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