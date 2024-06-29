#include <iostream>

using namespace std;

int main(){
  string a = "qwertyuiopasdfghjkl;zxcvbnm,./";
  char s;
  string t;
  cin>>s;
  cin>>t;
  for(int i=0;i<t.length();i++){
    // check the shift above here and then determine how long the for loop has to be
    for(int j=0;j<a.length()-1;j++){
      if(t[i]==a[j]){
        // since t[i] is changed, the if statement gets triggered again for the same i at a diff j
        if(s=='L'){
          t[i]=a[j+1];
          break;
        }
        else if(s=='R'){
          t[i]=a[j-1];
          break;
        }
      }
    }
  }
  cout<<t<<endl;
  return 0;
}


