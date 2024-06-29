#include <iostream>

using namespace std;

int main(){
  int n, m;
  cin>>n>>m;
  int d=0;
  while(n>0){
    n--;
    if(d%m==0){
      n++;
    }
    d++;
  }
  cout<<d-1<<endl;
  // might work idk judging is broken
}
