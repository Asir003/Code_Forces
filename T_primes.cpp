#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

const int MAX_N = 1000000;

bool isPrime[MAX_N + 1];

void sieve() {
    for (int i = 2; i <= MAX_N; i++) {
        isPrime[i] = true;
    }
    for (int i = 2; i * i <= MAX_N; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= MAX_N; j += i) {
                isPrime[j] = false;
            }
        }
    }
}

bool isTPrime(long long n) {
    long long sqrt_n = sqrt(n);
    return sqrt_n * sqrt_n == n && isPrime[sqrt_n];
}

int main() {
    sieve();
    int n;
    cin >> n;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        if (isTPrime(arr[i])) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}