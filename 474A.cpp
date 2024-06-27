#include <csignal>
#include <iostream>

using namespace std;

int main(){
  string a = "qwertyuiopasdfghjkl;zxcvbnm,./";
  char s;
  string t;
  cin>>s>>t;
  for(int i=0;i<t.length();i++){
    for(int j=0;j<a.length();j++){
      if(t[i]==a[j]){
        if(s=='L'){
          t[i]=a[j+1];
        }
        else if(s=='R'){
          t[i]=a[j-1];
        }
      }
    }
  }
  cout<<t<<endl;

  return 0;
}


// it doesnt work on left for some reason? 
