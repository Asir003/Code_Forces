#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;
    int j = 5;
    
    while (n > 0) 
    {
        if (n >= j) 
        {
            n -= j;
            count++;
        }
         else 
        {
            j--;
        }
    }

    cout << count;
    return 0;
}
