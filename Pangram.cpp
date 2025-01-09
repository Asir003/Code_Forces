#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)

int main()
{
    int n;
    string al;
    cin>>n>>al;
    transform(al.begin(),al.end(),al.begin(),::toupper);
    //cout<<al;
    //int num=al.size();
    int max=0;
    FLI(i,0,n)
    {
        int count=0;
        FLJ(j,i+1,n)
        {
            if(al[i]==al[j])
            {
                count++;
            }
        }
        if(count==0)
        {
            max++;
        }
        else
        {
            continue;
        }
    }
    if(max==26)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
    
}