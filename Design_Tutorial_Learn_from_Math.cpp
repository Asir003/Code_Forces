#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)

int find(int num) {
    
    if (num <= 1)
        return 2;
    if (num == 2 || num == 3)
        return 1;
    for (int i = 2; i * i <= num; i++) 
    {
        if (num % i == 0)
            return 2;
    }
    return 1;
}
int main()
{
    int n;
    cin>>n;
    int a=n/2;
    int b=n-(n/2);
    for (int i=0;;i++)
    {
        int k=find(a);
        int l=find(b);
        if(k==2 && l==2 && a%2==0)
        {
            cout<<a<<" " <<b<<endl;
            return 0;
        }
        else
        {
            a--;
            b++;
        }
    }
    return 0;
}