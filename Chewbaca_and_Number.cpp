#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)

int main(){
    string v;
    cin>>v;
    for(int i=0;i<v.size();i++){
        int k=9-(v[i]-'0');
        if((v[i]-'0')>k){
            if(i!=0 || k!=0){
            v[i]=k+'0';
            }
        }
    }
    cout<<v<<endl;
}