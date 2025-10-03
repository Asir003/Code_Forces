#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)

int main(){
    int n;
    cin>>n;
    int max;
    FLI(i,0,n){
        int a;
        cin>>a;
        for(int i=a;i>=1;i--){
            if(i%2==0){
                max=i;
                break;
            }
        }
    int gcd=__gcd(max/2,max);
    cout<<gcd<<endl;    
   }
   return 0;
}