#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)

int main() 
{
    int n;
    cin >> n;
    
    int sum_x = 0, sum_y = 0, sum_z = 0;
    FLI(i, 0, n) 
    {
        int x, y, z;
        cin >> x >> y >> z;
        sum_x += x;
        sum_y += y;
        sum_z += z;
    }

    if (sum_x == 0 && sum_y == 0 && sum_z == 0) 
    {
        cout << "YES" << endl;
    } else 
    {
        cout << "NO" << endl;
    }
    
    return 0;
}
