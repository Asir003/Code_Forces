#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)

int main(){
    int n,a,k;
    string s;
    cin>>n;
    FLI(i,0,n){
        int sum=1;
        cin>>a;
        cin>>s;
        int j=a-1;
        for( k=0;k<j;k++){
            if(s[k]!=s[j]){
                j--;
                continue;
            }
            else{
                sum=j-(k-1);
                break;
            }
        }
        if(j-k<0)
            cout<<sum-1<<endl;
        else
            cout<<sum<<endl;
    }
    return 0;
}