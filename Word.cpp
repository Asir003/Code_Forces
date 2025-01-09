#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)
int main()
{
    string arr;
    cin>>arr;
    int sum=0;
    int sam=0;
    int l=arr.size();
    FLI(i,0,l)
    {
        if(arr[i]>90)
        {
            sum++;//short
        }
        else
        {
            sam++;
        }
    }
    if(sum>=sam)
    {
        transform(arr.begin(),arr.end(),arr.begin(),::tolower);
    }
   
    else
    {
        transform(arr.begin(),arr.end(),arr.begin(),::toupper);
    }
    cout<<arr;
    return 0;
}