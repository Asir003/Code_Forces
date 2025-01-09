#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int arr[6];
    arr[0]=a+(b*c);
    arr[1]=a*(b+c);
    arr[2]=a*(b*c);
    arr[3]=(a+b)*c;
    arr[4]=a+b+c;
    arr[5]=(a*b)+c;
    int max=arr[0];
    FLI(i,1,6)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<max;
    return 0;

}