#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)
int main()
{
    string arr;
    int n;
    cin>>arr>>n;
    int len=arr.size();
    int point=len-1;
    int count=0;
    FLI(i,0,n)
    {
        if(arr[point]=='0')
        {
            point--;
            count++;
            //cout<<count<<endl;
        } 
        else
        {
        arr[point]=arr[point]-1;
        }
    }   
    //cout<<count<<endl;
    FLI(i,0,len-count)
    {
        cout<<arr[i];
    }
    return 0;
}