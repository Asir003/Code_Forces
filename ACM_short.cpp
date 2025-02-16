#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)

int main(){
    int n,a,b;
    string name;
    cin>>n;
    vector<tuple<string,int,int,int>>v;
    FLI(i,0,n){
        cin>>name>>a>>b;
        v.push_back(make_tuple(name,a,b,i+1));
    }
    sort(v.begin(),v.end(),[](const tuple <string,int,int,int>&x,const tuple <string,int,int,int>&y){
        if(get<1>(x)!=get<1>(y))
        return get<1>(x)>get<1>(y);
        else if(get<2>(x)!=get<2>(y))
        return get<2>(x)<get<2>(y);
        else
        return  get<3>(x) < get<3>(y);;
    });
    FLI(i,0,n){
        cout<<get<0>(v[i])<<" "<<get<1>(v[i])<<" "<<get<2>(v[i])<<endl;
    }
    
    
}