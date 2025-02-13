#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)

int main(){
    int n,a,b;
    cin>>n;
    int sum=0,sam=0;
    FLI(i,0,n){
        cin>>a>>b;
        if(a>b)
        sum++;
        else if(a==b)
        continue;
        else
        sam++;
    }
    if(sum>sam){
        cout<<"Mishka"<<endl;
    }
    else if(sum==sam){
        cout<<"Friendship is magic!^^"<<endl;
    }
    else{
        cout<<"Chris"<<endl;
    }
}