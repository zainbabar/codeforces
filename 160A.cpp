#include <bits/stdc++.h>

using namespace std;

void solve(int arr[], int n);
void sort(int arr[], int n);

int main(){
    int n;
    cin>>n;
    int arr[n];
        for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr, n);
    // array has been properly sorted;
    solve(arr, n);
    // lets see if its solved properly
}
void solve(int arr[], int n){
  int min=0;
  int sum=0;
  int tsum=0;
  while(true){
    for(int i=0;i<min;i++){
      sum+=arr[i];
    }
    for(int i=min;i<n;i++){
      tsum+=arr[i];
    }
    if(sum>tsum){
      cout<<min<<endl;
      break;
    }
    else{
      min++;
      sum=0;
      tsum=0;
    }
  }
}
void sort(int arr[], int n){
  int max;
  for(int i=0;i<n-1;i++){
    max=i;
    for(int j=i+1;j<n;j++){
      if(arr[j]>arr[max]){
        max=j;
      }
    }
    if(max!=i){
      swap(arr[max],arr[i]);
    }
  }
}
