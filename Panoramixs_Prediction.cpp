#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)

int Prime(int num) {
    if (num <= 1) return -1;
    if (num == 2) return 2;
    if (num % 2 == 0) return -1;
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return -1;
    }
    return 2;
}
int main(){
    int a,b;
    cin>>a>>b;
    for(int i=a+1;i<=50;i++){
        int k=Prime(i);
        if(k==2 ){
            if(i==b){
            cout<<"YES"<<endl;
            return 0;
            }
            else{
                break;
            }
        }
        if(i>b){
            break;
        }
    }
    cout<<"NO"<<endl;


}