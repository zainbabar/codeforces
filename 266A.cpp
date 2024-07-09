#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<char> s;
    char c;
    for(int i = 0; i < n; i++){
        cin >> c;
        s.push_back(c);  
    }
    
    int ans = 0;
    for(int i = 0; i < n - 1; i++){
        if(s[i] == s[i + 1]){
            ans++;
        }
    }
    
    cout << ans << endl;
    return 0;
}
