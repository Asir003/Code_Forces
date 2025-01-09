#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)

int main()
{
    int a,b,c;
    cin>>a>>b;
    int count=0;
    int sum=0;
    FLI(i,0,a)
    {
       cin>>c;
       if(c+b<=5)
       {
          count++;
          if(count==3)
          {
            sum++;
            count=0;
          }
       }
    }
    cout<<sum<<endl;
    return 0;
}