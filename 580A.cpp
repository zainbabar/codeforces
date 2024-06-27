#include <bits/stdc++.h>

using namespace std;

void solve(int n, int a[]);

int main(){
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  solve(n, a);
  return 0;
}

void solve(int n, int a[]){
  // find what the max num of ints in a row that all increase
  // check if it if a pair increases
  int max=0;
  int ans=0;
  for(int i=0;i<n-1;i++){
    if(a[i]<=a[i+1]){
      max++;
    }
    else{
      max=0;
    }
    if(max>ans){
      ans=max;
    }
  }
  cout<<ans+1<<endl;
}
