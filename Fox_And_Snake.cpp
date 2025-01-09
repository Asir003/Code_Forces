#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)

int main()
{
    int a,b;
    cin>>a>>b;
    char arr[a][b];
    for(int i=0;i<a;i+=2)
    {
        FLJ(j,0,b)
        {
            arr[i][j]='#';
        }
    }
    for(int i=1;i<a;i+=2)
    {
        FLJ(j,0,b)
        {
            arr[i][j]='.';
        }
    }
    for(int i=1;i<a;i+=4)
    {
        arr[i][b-1]='#';
    }
    for(int i=3;i<a;i+=4)
    {
        arr[i][0]='#';
    }
    FLI(i,0,a)
    {
        FLJ(j,0,b)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    return 0;
}