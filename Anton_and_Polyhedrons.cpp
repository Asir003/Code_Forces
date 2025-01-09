#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)
int main()
{
    int n;
    cin>>n;
    string name;
    string t="Tetrahedron";
    string c="Cube";
    string o="Octahedron";
    string d="Dodecahedron";
    string i="Icosahedron";
    int sum=0;
    FLI(i,0,n)
    {
       cin>>name;
       if(name.compare(t)==0)
       {
          sum=sum+4;
       }
       else if(name.compare(c)==0)
       {
          sum=sum+6;
       }
       else if(name.compare(o)==0)
       {
          sum=sum+8;
       }
       else if(name.compare(d)==0)
       {
          sum=sum+12;
       }
       else
       {
          sum=sum+20;
       }
    }
    cout<<sum;
}