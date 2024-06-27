#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;

int main(){
  string str;
  cin>>str;
  unordered_set<char> s;
  for(int i=0;i<str.size();i++){
    s.insert(str[i]);
  }
  int ans=s.size();
  if(ans%2==0){
    cout<<"CHAT WITH HER!";
  }
  else{
    cout<<"IGNORE HIM!"<<endl;
  }
}
