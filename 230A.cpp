#include <bits/stdc++.h>
#include <utility>
#include <vector>

using namespace std;

int main(){
  int s, n;
  cin>>s>>n;

  vector<pair<int,int>>dg;
  int x,y;
  for(int i=0;i<n;i++){
    cin>>x>>y;
    dg.push_back(make_pair(x,y));
  }
  sort(dg.begin(),dg.end());
  for(int i=0;i<n;i++){
    if(s>dg[i].first){
      s+=dg[i].second;
    }
    else{
      cout<<"NO"<<endl;
      return 0;
    }
  }
  cout<<"YES"<<endl;
  return 0;
}
