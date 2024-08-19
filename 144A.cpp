
#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;

  int a[n];

  for (int i = 0; i < n; i++){
    cin >> a[i];
  }

  int maxIndex = 0, minIndex = 0; 

  // starts at 1 because we already have 0
  for (int i = 1; i < n; i++) {
    // > because we want the leftmost maximum
    if (a[i] > a[maxIndex]){
      maxIndex = i;
    }
    // <= because we want the rightmost minimum
    if (a[i] <= a[minIndex]){
      minIndex = i;
    }
  }

  int ans = 0;
  ans += maxIndex;
  ans += (n - 1 - minIndex);

  if (maxIndex > minIndex){
    ans--;
  }

  cout << ans << endl;

  return 0;
}

