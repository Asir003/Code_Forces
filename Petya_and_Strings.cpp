#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)
int main()
{
    string arr1;
    string arr2;
    cin>>arr1>>arr2;
    transform(arr1.begin(),arr1.end(),arr1.begin(),::toupper);
    transform(arr2.begin(),arr2.end(),arr2.begin(),::toupper);
   // cout<<arr1<<endl<<arr2;
    cout<<arr1.compare(arr2)<<endl;
    return 0;

}