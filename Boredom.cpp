#include <bits/stdc++.h>
using namespace std;

#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    FLI(i, 0, n) {
        cin >> arr[i];
    }

    set<int> unique_set(arr.begin(), arr.end());
    vector<int> unique_array(unique_set.begin(), unique_set.end());

    

    return 0;
}
