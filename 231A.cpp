#include <csignal>
#include <iostream>

using namespace std;

int main(){
  int n;
  int ans=0;
  cin>>n;
  for(int i=0;i<n;i++){
    int c=0;
    for(int j=0;j<3;j++){
      int temp;
      cin>>temp;
      if(temp==1){
        c++;
      }
    }
    if(c>=2){
      ans++;
    }
  }
  cout<<ans<<endl;
  return 0;
}
