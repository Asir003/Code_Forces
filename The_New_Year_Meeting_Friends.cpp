#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[3];
    for (int i = 0; i < 3; i++) 
    {
        cin >> arr[i];
    }

    sort(arr, arr + 3);

    int min_distance = (arr[1]-arr[0])+(arr[2]-arr[1]);

    cout<<min_distance<<endl;

    return 0;
}
