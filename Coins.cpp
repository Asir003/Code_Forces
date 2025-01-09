#include <iostream>
using namespace std;

int main()
{
   
    long long n, S;
    cin >> n >> S;

    long long min_coins = (S + n - 1) / n;

    cout << min_coins << endl;

    return 0;
}
