#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)

int main(){
    int n,a,b,l,k;
    cin>>n;
    FLJ(j,0,n){
        cin>>a;
        int arr[a];
        k=0;
        if(a%2!=0){
            l=a;
        }
        else{
            l=a+1;
        }
        FLI(i,0,a){
            cin>>b;
            if(i+k<=a-1){
                arr[i+k]=b;
                k++;
            }
            else{
                arr[l-2]=b;
                l=l-2;
            }
        }
        for(int k=0;k<a;k++){
            cout<<arr[k]<<" ";
        }
        cout<<endl;
    }
    
}