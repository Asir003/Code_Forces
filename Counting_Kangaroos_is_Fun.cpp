#include <bits/stdc++.h>
using namespace std;
#define FLI(i, a, b) for (int i = a; i < b; i++)

int main()
{
    int n,a;
    cin>>n;
    vector<int>v;
    FLI(i,0,n)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    int Element=n;  
    int i=0;        
    int j=n/2;    

    while (i<n/2&&j<n)
    {
        if(v[j]>=2*v[i])  
        {
            Element--;  
            i++;        
        }
        
        j++;
    }

    cout<<Element<<endl; 
    return 0;
}
