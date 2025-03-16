#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)

int main(){
    int a,b;
    cin>>a>>b;
    int arr[a];
    FLI(i,0,a){
        cin>>arr[i];
    }
    sort(arr,arr+a);
    int sum=0;
    FLI(i,0,b){
        if(arr[i]<0){
            sum+=abs(arr[i]);
        }
    }
    cout<<sum<<endl;
    return 0;
}