#include <cinttypes>
#include <csignal>
#include <iostream>

using namespace std;

void sort(int arr[], int n);
void solve(int arr[], int n);

int main(){
  int n, m;
  cin>>n>>m;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  sort(arr, n);
  solve(arr, m);
  return 0;
}

void solve(int arr[], int m){
  int ans=0;
  for(int i=0;i<m;i++){
    if(arr[i]<0){
      ans+=(-(arr[i]));
    }
  }
  cout<<ans<<endl;
}

void sort(int arr[], int n){
  bool swapped;
  for(int i=0;i<n-1;i++){
    swapped=false;
    for(int j=0;j<n-i-1;j++){
      if(arr[j]>arr[j+1]){
        swap(arr[j], arr[j+1]);
        swapped=true;
      }
    }
    if(swapped==false){
      break;
    }

  }
}
