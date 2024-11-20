#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string word;
        cin>>word;
        int count=word.size();
        if(count>10)
        {
            cout<<word[0];
            cout<<count-2;
            cout<<word[count-1]<<endl;
        }
        else
        {
            cout<<word<<endl;
        }
    }
    return 0;

}