#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)

int main()
{
    string arr;
    cin>>arr;
    int count=0;
    int len=arr.size();
    //cout<<len<<endl;
    FLI(i,1,len)
    {
        if(arr[i]<91)
        {
            count++;
        }
    }
    //cout<<count<<endl;
    if(count==len-1 && arr[0]>91)
    {
    transform(arr.begin(),arr.end(),arr.begin(),::tolower);
    arr[0]=toupper(arr[0]);
    }
    else if(count==len-1 && arr[0]<91)
    {
    transform(arr.begin(),arr.end(),arr.begin(),::tolower);
    }
    else if(count==0 && arr[0]>91)
    {
    transform(arr.begin(),arr.end(),arr.begin(),::tolower);
    }
    
    cout<<arr;
    return 0;

}