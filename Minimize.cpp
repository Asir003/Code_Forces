#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)
void find(int a,int b){
    int sum=b;
    for(int i=a;i<=b;i++){
        int k=0;
        k=(i-a)+(b-i);
        if(k<=sum){
            sum=k;
        }
    }
    cout<<sum<<endl;
}
int main(){
    int n,a,b;
    cin>>n;
    FLI(i,0,n){
        cin>>a>>b;
        find(a,b);
    }
}