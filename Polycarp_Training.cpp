#include <iostream>
#include <vector>
using namespace std;
int max(int x, int y) {
return (x > y) ? x : y;
}
int knapSack(int W, int w[], int v[], int n, vector<int>& selectedItems) {
int i, wt;
int K[n + 1][W + 1];
// Build the DP table K[][]
for (i = 0; i <= n; i++) {
for (wt = 0; wt <= W; wt++) {
if (i == 0 || wt == 0)
K[i][wt] = 0;
else if (w[i - 1] <= wt)
K[i][wt] = max(v[i - 1] + K[i - 1][wt - w[i - 1]], K[i - 1][wt]);
else
K[i][wt] = K[i - 1][wt];
}
}
// Store the maximum value
int maxValue = K[n][W];
// Backtrack to find the items included
wt = W;
for (i = n; i > 0 && maxValue > 0; i--) {
// If this item is included
if (maxValue != K[i - 1][wt]) {
selectedItems.push_back(i - 1); // Store the item index
maxValue -= v[i - 1]; // Subtract its value
wt -= w[i - 1]; // Reduce the weight
}
}
return K[n][W];
}
int main() {
cout << "Enter the number of items in a Knapsack: ";
int n, W;
cin >> n;
int v[n], w[n];
for (int i = 0; i < n; i++) {
cout << "Enter value and weight for item " << i << ": ";
cin >> v[i];
cin >> w[i];
}
cout << "Enter the capacity of knapsack: ";
cin >> W;
vector<int> selectedItems;
int maxValue = knapSack(W, w, v, n, selectedItems);
cout << "Maximum value in Knapsack: " << maxValue << endl;
cout << "Items included (index, value, weight):" << endl;
for (int i : selectedItems) {
cout << "Item " << i << " (Value: " << v[i] << ", Weight: " << w[i] << ")" << endl;
}
return 0;
}