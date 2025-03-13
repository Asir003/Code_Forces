#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)

void find(int x,int y,int n){
    int mod=n%x;
    if(mod==y){
        cout<<n<<endl;
    }
    else if(mod>y){
        cout<<(n-(mod-y))<<endl;
    }
    else{
        int total=mod+(x-y);
        cout<<(n-total)<<endl;
    }
}
int main(){
    int t,x,y,n;
    cin>>t;
    FLI(i,0,t){
        cin>>x>>y>>n;
        find(x,y,n);
    }
    return 0;
}