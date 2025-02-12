#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)

int main(){
    int n;
    cin>>n;
    vector<string> team(n);
    string name;
    FLI(i,0,n){
        cin>>team[i];
    }
    int sum=0;
    FLI(i,0,n){
    int count=0;
        for(int j=i;j<n;j++){
            if(team[i]==team[j]){
                count++;
            }
        }
        //cout<<count<<endl;
        if(count>=sum){
            sum=count;
           name=team[i];
        }
    }
    cout<<name<<endl;
}
