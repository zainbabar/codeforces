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
    int ans = 0;

    sort(a.begin(), a.end());



}

