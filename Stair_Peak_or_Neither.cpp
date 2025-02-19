#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)

int main(){
    int n,a,b,c;
    cin>>n;
    FLI(i,0,n){
        cin>>a>>b>>c;
        if(a<b && b<c){
            cout<<"STAIR"<<endl;
        }
        else if(a<b && b>c){
            cout<<"PEAK"<<endl;
        }
        else{
            cout<<"NONE"<<endl;
        }
    }
    return 0;
}