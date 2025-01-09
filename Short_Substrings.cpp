#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)

void find(string arr)
{
    int n=arr.size();
    vector <char> v;
    if(n%2==0)
    {
        v.push_back(arr[0]);
        for(int i=1;i<n-1;i+=2)
        {
            v.push_back(arr[i]);
        }
        v.push_back(arr[n-1]);
        for(auto element:v)
        {
            cout<<element;
        }
        cout<<endl;

    }
}
int main()
{
    int n;
    cin>>n;
    string arr;
    FLI(i,0,n)
    {
        cin>>arr;
        find(arr);
    }
    return 0;
}