#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)

int main(){
    int a,b,c,d;
    vector<int> num;
    cin>>a>>b>>c>>d;
    num.push_back(a);
    num.push_back(b);
    num.push_back(c);
    num.push_back(d);
    string nam;
    cin>>nam;
    int sum=0;
    for(int i=0;i<nam.size();i++){
        sum=sum+num[((nam[i])-'0')-1];
       // cout<<sum<<endl;
    }
    cout<<sum<<endl;

}