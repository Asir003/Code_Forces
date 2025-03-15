#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)

void find(int arr[],int a){
    int sam=0;
    int sum=0;
    FLI(i,0,a){
        if(i%2==0){
            if(arr[i]%2!=0){
                sam++;
            }
        }
        else{
            if(arr[i]%2==0){
                sum++;
            }
        }
    }
    int count=sum+sam;
    if(count%2==0 && sum==sam){
        cout<<count/2<<endl;
    }
    else
    {
        cout<<"-1"<<endl;
    }
}
int main(){
    int t,a;
    cin>>t;
    FLI(i,0,t){
        cin>>a;
        int arr[a];
        FLI(i,0,a){
            cin>>arr[i];
        }
        find(arr,a);
    }
    return 0;
}