#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)

int main(){
    int n,a;
    cin>>n>>a;
    int arr[n];
    FLI(i,0,n){
        cin>>arr[i];
    }
    int sum=0;
    FLI(i,0,a){
        sum+=arr[i];
    }
    int min=sum;
    int k=0;
    for(int i=1;i<=n-a;i++){
        sum=sum-arr[i-1]+arr[i+a-1];
        if(sum<min){
            min=sum;
            k=i;
        }
    }
    cout<<k+1<<endl;
}