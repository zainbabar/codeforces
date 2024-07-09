#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
  ll n, m, a;
  cin>>n>>m>>a;
  ll ans=((m+a-1)/a)*((n+a-1)/a);
  cout<<ans<<endl;
}
