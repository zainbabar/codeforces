#include <bits/stdc++.h>

using namespace std;

int main (int argc, char *argv[]) {
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
      cin >> a[i]; 
    }
    int ans = 0; 
    int check = 0;
    while (true){
      for (int i = 0; i < n - 1; i++){
        if (a[i] >= a[i + 1]){
          a[i + 1] /= 2;
          ans++;
        }
      }
      for (int i = 0; i < n - 1; i++){
        if (a[i] >= a[i + 1]){
          check++;
        }
      }
      if (check == 0){
        cout << ans << endl;
        return 0;
      }
      else {
        check = 0;
      }
    }
  }
  return 0;
}
