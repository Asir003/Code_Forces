#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)
int main()
{
    string arr;
    cin>>arr;
    int size=arr.size();
    int count=0;
    FLI(i,0,size)
    {
        int sum=0;
        FLJ(j,i+1,size)
        {
            if(arr[i]==arr[j])
            {
                sum++;
            }
        }
        if(sum==0)
        {
            count++;
        }
    }
    if(count%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
    {
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}