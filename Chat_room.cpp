#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)
int main()
{
    string word,word1,word2,word3;
    cin>>word;
    int len=word.size();
    FLI(i,0,len)
    {
        if(word[i]=='h' || word[i]=='e' || word[i]=='l' || word[i]=='o')
        {
            word1.push_back(word[i]);
        }
    }
    //cout<<word1<<endl;
    int len2=word1.size();
    word2="hello";
    int j=0;
    //cout<<len2;
    FLI(i,0,len2)
    {
        if(word1[i]==word2[j])
        {
            word3.push_back(word1[i]);
            j++;
        } 
    }
    //cout<<word3<<endl;
    if(word3.compare(word2)==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}