#include <cinttypes>
#include <csignal>
#include <iostream>

using namespace std;

typedef long long ll;

string solve(ll n);

int main(){
  int t; 
  cin>>t;
  ll test[t];
  for(int i=0;i<t;i++){
    cin>>test[i];
  }
  for(int i=0;i<t;i++){
    solve(test[i]);
    cout<<solve(test[i])<<endl;
  }
  return 0;
}

string solve(ll n){
  while(n!=1){
    if(n%2!=0){
      return "YES";
    }
    n/=2;
  }
  return "NO";
}

// basically if n is not a power of 2, then it has an odd divisor 

// ngl i dont really understand this one
