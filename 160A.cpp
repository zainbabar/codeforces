#include <iostream>

using namespace std;

int solve(int arr[], int n);
void sort(int arr[], int n);

int main(){
    int n;
    cin>>n;
    int arr[n];
        for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr, n);
    cout<<solve(arr, n)<<endl;
}
int solve(int arr[], int n){
    int sum = 0;
    int ans=0;
    for(int i=0;i<n;i++){
        ans++;
        int tsum=0;
        for(int j=i;j<n;j++){
            tsum+=arr[i];
        }
        sum+=arr[i];
        if(sum>tsum){
            return ans;
        }
    }
    return ans;
}
void sort(int arr[], int n){
    int max;
    for(int i=0;i<n-1;i++){
        max=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[max]){
                max=j;
            }
        }
        if(max!=i){
            swap(arr[max],arr[i]);
        }
    }
}