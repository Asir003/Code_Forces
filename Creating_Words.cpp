#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)

int main(){
    int n;
    cin>>n;
    cin.ignore();
    string word;
    FLI(i,0,n){
        getline(cin,word);
            swap(word[0],word[4]);   
        cout<<word<<endl;
    }
}