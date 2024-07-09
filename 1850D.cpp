#include <bits/stdc++.h>
#include <vector>

using namespace std;

void solve(int n, int k, vector<int>& a);

int main(){
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        solve(n, k, a);
    }
    return 0;
}

void solve(int n, int k, vector<int>& a) {
    sort(a.begin(), a.end());
    int max_len = 1, current_len = 1;

    for (int i = 1; i < n; ++i) {
        if (a[i] - a[i - 1] <= k) {
            current_len++;
        } else {
            max_len = max(max_len, current_len);
            current_len = 1;
        }
    }

    max_len = max(max_len, current_len);

    cout << n - max_len << "\n";
}

