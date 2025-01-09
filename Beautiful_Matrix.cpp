#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)
int main()
{
    int matrix[5][5];
    int a,b;
    FLI(i,0,5)
    {
        FLJ(j,0,5)
        {
            cin>>matrix[i][j];
        }
    }
     FLI(i,0,5)
    {
        FLJ(j,0,5)
        {
            if(matrix[i][j]==1)
            {
                a=i;
                b=j;
                break;
            }
            
        }
    }
    int c=a>2 ? (a-2):(2-a);
    int d=b>2 ? (b-2):(2-b);
    int total=c+d;
    cout<<total;
    return 0;

}