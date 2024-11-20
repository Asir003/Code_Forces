#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)

int main()
{
    string arr1;
    string arr2;
    string arr3;
    cin>>arr1>>arr2>>arr3;
    arr1.append(arr2);
    int value=arr1.size();
    //cout<<value;
    int len=arr3.size();
    int max=len;
    //cout<<arr1;
    int count=0;
    FLI(i,0,value)
    {
        FLJ(j,0,len)
        {
            if(arr1[i]==arr3[j])
            {
                count++;
                arr3.erase(j,1);
                len=arr3.size();
                break;
            }
        }
    }
    //cout<<count;
    if(count==value )
    {
        if(value==max)
        {
        cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
    }
    else
    {
        cout<<"NO";
    }

    return 0;
}