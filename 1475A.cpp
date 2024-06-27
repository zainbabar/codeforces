#include <iostream>

using namespace std;

typedef long long ll;

void solve(ll n);

int main(){
  int t; 
  cin>>t;
  ll test[t];
  for(int i=0;i<t;i++){
    cin>>test[i];
  }
  for(int i=0;i<t;i++){
    solve(test[i]);
  }
  return 0;
}

void solve(ll n){
  // learn how to use bitwise operator for this q
}
