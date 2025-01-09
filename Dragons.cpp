#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)

int main()
{
    int s,d;
    cin>>s>>d;
    int arr[d];
    vector<pair<int,int>> v;
    FLI(i,0,d)
    {
        int a,b;
        cin>>arr[i]>>b;
        v.push_back(make_pair(arr[i],b));  
    }
    sort(v.begin(),v.end());
    FLI(i,0,d)
    {
        if(v[i].first>=s) //new
        {
            cout<<"NO";
            return 0;
        }
        else
        {
            s=s+v[i].second; //new
        }
    }
    cout<<"YES";
}