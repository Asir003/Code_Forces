#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)
int main()
{
    string arr;
    cin>>arr;
    transform(arr.begin(),arr.end(),arr.begin(),::tolower);
    int total=arr.size();
    FLI(i,0,total)
    {
        if(arr[i]=='y' || arr[i]=='e' || arr[i]=='i' || arr[i]=='o' || arr[i]=='u' || arr[i]=='a')
        {
            continue;
        }
        else
        {
            cout<<".";
            cout<<arr[i];
        }
 
    }
    return 0;
 
}