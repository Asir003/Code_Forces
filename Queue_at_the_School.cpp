#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)
int main()
{
    int a,b;
    cin>>a>>b;
    string bg;
    cin>>bg;
    int l=0;
    FLI(i,0,b)
    {
        int k=0;
        FLJ(j,0,a)
        {
           if(bg[k]=='B' && bg[k+1]=='G')
           {
              swap(bg[k],bg[k+1]);
              k=k+2;
           }
           else
           {
              k++;
           }
        }
    }
    cout<<bg;
    return 0;
}