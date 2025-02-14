#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)

void find(string name){
    if(name[0]=='a' || name[1]=='b' || name[2]=='c'){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    string name;
    FLI(i,0,n){
        cin>>name;
        find(name);
    }
    return 0;
}