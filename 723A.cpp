#include <bits/stdc++.h>

using namespace std;

int main(){
  vector<int> x(3);
  for(int i=0;i<3;i++){
    cin>>x[i];
  }
  sort(x.begin(), x.end());
  int ans=0;
  ans+=abs(x[0]-x[1]);
  ans+=abs(x[2]-x[1]);
  cout<<ans<<endl;
}

