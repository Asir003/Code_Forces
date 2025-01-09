#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)
int main()
{
    string arr;
    cin>>arr;
    string word2;
    int total=arr.size();
    int count=0;
    int sum=0;
    FLI(i,0,total)
    {
        if(arr[i]=='W' && arr[i+1]=='U' && arr[i+2]=='B')
        {
            if(i!=0)
            {
                sum++;
                if(sum==1)
                {
                    word2.insert(count," ");
                    count++;
                }
            }
            i+=2;            
        }
        else
        {
            word2.push_back(arr[i]);
            count++;
            sum=0;
        }
        
    }
    int space= word2.find(" ");
    if(space==0)
    {
        word2.erase(space,1);
    }
    cout<<word2;
    return 0;
}