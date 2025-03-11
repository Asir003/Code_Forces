#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)
void find(string arr){
    string arr1="codeforces";
    int count=0;
    FLI(i,0,10){
        if(arr[i]!=arr1[i]){
            count++;
        }
    }
    cout<<count<<endl;
}
int main(){
    int n;
    cin>>n;
    string arr;
    FLI(i,0,n){
        cin>>arr;
        find(arr);
    }
}