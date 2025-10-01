#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)

int main(){
    int n,a,b;
    cin>>n;
    FLI(i,0,n){
        int maxc=0,count=0;
        cin>>a;
        FLJ(j,0,a){
            cin>>b;
            if(b==0){
                count++;
                if(count>maxc){
                    maxc=count;
                }
            }
            else{
                count=0;
            }
        }
        cout<<maxc;
    }
}