#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)
int dis(int n)
{
    string number=to_string(n);
    int len=number.size();
    FLI(i,0,len)
    {
        FLJ(j,i+1,len)
        {
            if(number[i]==number[j])
            {
                return 2;
            }
        }
    }
    return 1;
}
int main()
{
    int n,num;
    cin>>n;
    for(int i=1;;i++)
    {
        n++;
        int year=dis(n);
        if(year==1)
        {
            cout<<n;
            return 0;
        }

    }
}