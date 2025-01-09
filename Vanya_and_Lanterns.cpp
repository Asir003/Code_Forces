#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)

int main()
{
    int n, a;
    cin >> n >> a;
    vector<int> arr(n);
    FLI(i, 0, n)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    double maxDist = 0;

    // Consider the distance from the start of the street to the first streetlight
    maxDist = max(maxDist, (double)arr[0]);

    // Consider the distance between consecutive streetlights
    FLI(i, 0, n - 1)
    {
        maxDist = max(maxDist, (arr[i + 1] - arr[i]) / 2.0);
    }

    // Consider the distance from the last streetlight to the end of the street
    maxDist = max(maxDist, (double)(a - arr[n - 1]));

    printf("%.10lf\n", maxDist);
    return 0;
}
