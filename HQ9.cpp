#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)
int main()
{
    string word;
    cin>>word;
    int len=word.size();
    FLI(i,0,len)
    {
        if(word[i]=='H' || word[i]=='Q' || word[i]=='9')
        {
            cout<<"YES";
            return 0;
        }
        
    
    }
    cout<<"NO";
    return 0;
}