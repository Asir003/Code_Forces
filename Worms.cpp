#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)

int main()
{
    int n,z;
    cin>>n;
    int arr[n];
    FLI(i,0,n)
    {
        cin>>arr[i];
    }
    cin>>z;
    int arr1[z];
    FLI(i,0,z)
    {
        cin>>arr1[i];
    }
    int k=1;
    int l=1;
    vector <pair<int,int>> v;
    FLI(i,0,n)
    {
        FLJ(j,0,arr[i])
        {
            v.push_back(make_pair(k,l));
            k++;
        }
        l++;
    }
    sort(v.begin(),v.end());
   FLI(i, 0, z) {
        auto it = lower_bound(v.begin(), v.end(), make_pair(arr1[i], 0));
        if (it != v.end() && it->first == arr1[i]) {
            cout << it->second << endl;  // Output the `second` value where `first` matches `arr1[i]`
        } else {
            cout << "Element not found" << endl;
        }
    }
    return 0;
}