#include <bits/stdc++.h>
#include <utility>

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
  bool swapped;
  for(int i=0;i<n-1;i++){
    swapped = false;
    for(int j=0;j<n-i-1;j++){
      if(a[j]>a[j+1]){
        swap(a[j], a[j+1]);
        swapped=true;
      }
    }
    if(swapped==false){
      break;
    }
  }
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
  cout<<endl;
}

