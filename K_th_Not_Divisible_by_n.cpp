#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)

int main(){
    int n;
    cin>>n;
    FLI(i,0,n){
        int a,b;
        cin>>a>>b;
        int l=b+((b-1)/(a-1));
        cout<<l<<endl;
    }
}