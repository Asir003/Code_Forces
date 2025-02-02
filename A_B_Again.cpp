#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)

void result(string b){
    int sum=0;
    sum=(b[0]-'0')+(b[1]-'0');
    cout<<sum<<endl;
}
int main(){
    int a;
    string b;
    cin>>a;
    FLI(i,0,a){
        cin>>b;
        result(b);
    }
}