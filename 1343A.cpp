#include <bits/stdc++.h>
using namespace std;

// this is candies i think

void solve() {
    int n; 
    cin >> n;
    int x = 1;
    int k = 1;
    int sum = 0;
    while (true) {
        if (x > n) {
            x = 1;
            k++;
        }
        sum = 0;
        for (int i = 0; i < k; i++) {
            sum += x * pow(2,i);
        }
        if (sum == n) {
            cout << x << endl;
            return;
        } else if (sum > n) {
            x++;
        }
    }
}
// bruhhh i almost got it finish tmmrw ig
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

