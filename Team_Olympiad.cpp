#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)

int main()
{
    int n;
    cin>>n;
    int arr[3]={0};
    vector<pair<int,int>>v;
    FLI(i,0,n)
    {
        int a;
        cin>>a;
        arr[a-1]++;
        v.push_back(make_pair(a,i+1));
    }
    int min=arr[0];
    for(int i=1;i<3;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    sort(v.begin(),v.end());
    if(min==0)
    {
        cout<<min<<endl;
        return 0;
    }
    else
    {
        int i=0;
        int j=arr[0];
        int k=arr[0]+arr[1];
        cout<<min<<endl;
        for(int x=0;i<min;x++)
        {
            cout<<v[i].second<<" "<<v[j].second<<" "<<v[k].second<<" "<<endl;
            i++;
            j++;
            k++;
        }
    }
    return 0;
}