#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)

int find(string yes)
{
    transform(yes.begin(),yes.end(),yes.begin(),::toupper);
    if(yes=="YES")
    {
        return 1;
    }
    else
    {
        return 2;
    }
}
int main()
{
    int n;
    string yes;
    cin>>n;
    int arr[n];
    FLI(i,0,n)
    {
        cin>>yes;
        int k=find(yes);
        arr[i]=k;
    }
    FLI(i,0,n)
    {
        if(arr[i]==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;

        }
    }
    return 0;
}