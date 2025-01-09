#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)
int main()
{
    int n;
    cin>>n;
    double num;
    double sum=0;
    FLI(i,0,n)
    {
        cin>>num;
        sum+=num;
    }
    printf("%.12lf",sum/n);
    return 0;
}