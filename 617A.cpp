#include <iostream>

using namespace std;

int main(){
    int x, e;
    cin>>x;   
    e=0;
    int s=5;
    int ans=0;
    while(true){
        if(x==0){
            cout<<ans<<endl;
            return 0;
        }
        if(x>=s){
            x-=s;
            ans++;
        }
        else{
            s--;
        }
    }
    return 0;
}