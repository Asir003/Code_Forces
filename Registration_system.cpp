#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)

int main()
{
    int n;
    cin>>n;
    string arr[n];
    map<string, int> count; //new
    vector<string>arr1(n);  //new

    FLI(i,0,n)
    {
        cin>>arr[i];
        count[arr[i]]++;
        if(count[arr[i]] == 1)
            arr1[i] = "OK";
        else
            arr1[i] = arr[i] + to_string(count[arr[i]] - 1); //new
    }

    FLI(i,0,n)
    {
        cout<<arr1[i]<<endl;
    }
    return 0;
}