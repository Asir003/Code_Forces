#include <iostream>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    long long count = (n + 1) / 2;

    if (k <= count) 
    {  
        cout << 2 * k - 1 << endl;
    } 
    else 
    {    
        cout << 2 * (k - count) << endl;
    }

    return 0;
}
