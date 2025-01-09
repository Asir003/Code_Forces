#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;

    long long numFlagstonesLength = (n + a - 1) / a;
    long long numFlagstonesWidth = (m + a - 1) / a;

    long long totalFlagstones = numFlagstonesLength * numFlagstonesWidth;

    cout << totalFlagstones << endl;

    return 0;
}
