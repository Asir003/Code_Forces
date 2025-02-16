#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)

int main(){
    string a,b,c;
    cin>>a;
    int x=stoi(a);
    if(x>=0){
        cout<<a<<endl;
    }
    else{
        for(int i=0;i<a.size()-1;i++){
            b.push_back(a[i]);
        }
        for(int i=0;i<a.size();i++){
            if(i==a.size()-2){
                continue;
            }
            else{
                c.push_back(a[i]);
            }
            
        }
        int l=stoi(b);
        int m=stoi(c);
        int k=l>m ? l:m;
        cout<<k<<endl;
    }
}