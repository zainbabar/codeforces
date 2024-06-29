#include <iostream>

using namespace std;

void sort(int a[]);

int solve(int a[], int k);

int main(){
  int k;
  cin>>k;
  int a[12];
  for(int i=0;i<12;i++){
    cin>>a[i];
  }
  sort(a);
  cout<<solve(a, k)<<endl;
  return 0;
}

int solve(int a[], int k){
  int sum=0;
  for(int i=0;i<12;i++){
    sum+=a[i];
    if(k==0){
      return 0;
    }
    if(sum>=k){
      return i+1;
    }
  }
  return -1;
}

void sort(int a[]){
  bool swapped;
  for(int i=0;i<12-1;i++){
    swapped=false;
    for(int j=0;j<12-i-1;j++){
      if(a[j]<a[j+1]){
        swap(a[j],a[j+1]);
        swapped=true;
      }
    }
    if(swapped==false){
      break;
    }
  }
}
