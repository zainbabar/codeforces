#include <bits/stdc++.h>

using namespace std;

int main (int argc, char *argv[]) {
  int t;
  cin >> t;

  while(t--){
    int n;
    cin >> n;
    // c1 is 1/3 of needed, c2 is 2/3 so we have full
    int c1 = n / 3;
    int c2 = n / 3;
    // if its divisible by 3 this is it no remainder 
    if (n % 3 == 0){
      cout << c1 << " ";
      cout << c2 << endl;
    }
    // else remainder is 1 or 2, if its 1 we need 1 more c1
    else if (n % 3 == 1) {
      cout << c1 + 1 << " ";
      cout << c2 << endl;
    }
    // if its 2 we need 1 more c2
    else if (n % 3 == 2) {
      cout << c1 << " ";
      cout << c2 + 1 << endl;
    }
  }
  return 0;
}
