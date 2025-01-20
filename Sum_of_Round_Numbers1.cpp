#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)
void result(int n)
{
    string m=to_string(n);
    int k=m.size();
    vector <int> l;
    int x;
    int count=0;
    FLI(i,0,k)
    {
        if(m[i]!='0')
        {
            x=(m[i]-'0')*((pow(10,k-i-1)));
            l.push_back(x);
            count++;
        }
    }
    cout<<count<<endl;
    FLI(i,0,count)
    {
        cout<<l[i]<<" ";
    }
    return;
}
int main()
{
    int n,a;
    
    cin>>n;
    vector<int> v;
    FLI(i,0,n)
    {
        cin>>a;
        v.push_back(a);
    }
    FLI(i,0,n)
    {
        result(v[i]);
        cout<<endl;
    }
    return 0;
}