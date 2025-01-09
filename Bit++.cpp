#include <bits/stdc++.h>
using namespace std;
#define FL(i,a,b) for (int i = a; i < b; i++)
int main()
{
    int a;
    cin >> a;
    string arr[a];
    string s1="X++";
    string s2="++X";
    string s3="X--";
    string s4="--X";
    int number=0;
    FL(i,0,a)
    {
        cin>>arr[i];
        if(arr[i].compare(s1)==0)
        {
            number++;
        }
        else if(arr[i].compare(s2)==0)
        {
            ++number;
        }
        else if(arr[i].compare(s3)==0)
        {
            number--;
        }
        else if(arr[i].compare(s4)==0)
        {
            --number;
        }        
    }
    cout<<number<<endl;
    return 0;
}