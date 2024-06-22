#include <iostream>
#include <string>

using namespace std;

void solve(string a,string b);

int main(){
    string a;
    string b;
    cin>>a;
    cin>>b;
    solve(a,b);
}

void solve(string a, string b){
    char ans[a.length()];
    for(int i=0;i<a.length();i++){
        if (a[i] != b[i]){
            ans[i] = '1';
        }
        else {
            ans[i] = '0';
        }
    }
    for(int i=0;i<a.length();i++){
        cout<<ans[i];
    }
}