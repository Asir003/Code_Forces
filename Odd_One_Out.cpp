#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)

int find(int a,int b,int c)
{
    int arr[10]={0};
    arr[a]++;
    arr[b]++;
    arr[c]++;
    FLI(i,0,10)
    {
        if(arr[i]==1)
        {
            return i;
        }
    }
    return -1;

}
int main()
{
    int n,a,b,c;
    cin>>n;
    vector <int> v;
    FLI(i,0,n)
    {
        cin>>a>>b>>c;
        int k=find(a,b,c);
        v.push_back(k);

    }
    FLI(i,0,n)
    {
        cout<<v[i]<<endl;
    }
    return 0;
}