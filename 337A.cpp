#include <bits/stdc++.h>

using namespace std;

void sort(int f[], int m);

int main(){
  int n, m;
  cin>>n>>m;
  int f[m];
  for(int i=0;i<m;i++){
    cin>>f[i];
  }
  sort(f,m);
  int min=100000;
  for(int i=0;i<m-n+1;i++){
    if(min>(f[i+n-1]-f[i])){
      min=(f[i+n-1]-f[i]);
    }
  }
  cout<<min<<endl;
}
// probably some stupid off by 1 error 
// IT WAS
void sort(int f[], int m){
  bool swapped;
  for(int i=0;i<m;i++){
    swapped = false;
    for(int j=0;j<m-i-1;j++){
      if(f[j]>f[j+1]){
        swap(f[j],f[j+1]);
        swapped=true;
      }
    }
    if(swapped==false){
      break;
    }
  }
}
