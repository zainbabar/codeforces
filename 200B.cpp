#include <iostream>

using namespace std;

int main(){
  long double n;
  cin>>n;
  long double ans=0;

  for(int i=0;i<n;i++){
    long double temp;
    cin>>temp;
    ans+=temp/n;
  }

  cout<<ans<<endl;
  return 0;
}


