#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)
int main()
{
    string name;
    string name1;
    getline(cin, name);
    int num=name.size();
    for(int i=1;i<num;i+=3)
    {
        if(name[i]=='}')
        {
            continue;
        }
        else
        {
        name1.push_back(name[i]);
        }
    }
    //cout<<name1<<endl;
    int sum=0;
    int nam=name1.size();
    FLI(i,0,nam)
    {
        int count=0;
        FLJ(j,i+1,nam)
        {
            if(name1[i]==name1[j])
            {
                count++;
            }
        }
        if(count==0)
        {
            sum++;
        }
    }
    cout<<sum;
    //cout<<nam;
    return 0;
}