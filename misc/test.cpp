#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n; 
    bool ans = false;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==1){
            ans=true;
        }
    }
    if(ans){
        cout<<"hard"<<endl;
    }
    else{
        cout<<"easy"<<endl;
    }
}