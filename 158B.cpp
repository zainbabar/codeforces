#include <bits/stdc++.h>
#include <csignal>
#include <ostream>

using namespace std;

int main(){
  int n;
  cin>>n;
  vector<int> s(n);
  for(int i=0;i<n;i++){
    cin>>s[i];
  }
  // ok wait i have the first 3 cases, im just missing like dge cases of 1 x 12 times
  sort(s.rbegin(),s.rend());
  int sp;
  int ans=0;
  for(int i=0;i<n;i++){
    if(s[i]!=0){
      sp=4-s[i];
      ans++;
      if(sp>0){
        for(int j=i+1;j<n;j++){
          if(sp>=s[j]){
            s[j]=0;
            sp-=s[j];
          }
          else{
            break;
          }
        }
      }
    }
  }
  cout<<ans<<endl;
}
  // sort the array 
  // iterate through
  // if the index is not 0 
  // if its zero its already in a car so we dont even check it 
  // else find the space in a car if we put that one in first
  // then we increment the nuimber of cars
  // then we go through the rest of the array 
  // if the next value is less than or equal to the space
  // then we add it into the car
    
  // issues we have rn:
  //  if its all ones then it doesnt work
  //  how can i make it register that the car is full?
  //  if the car is full we want to go to the next non zero index of the array
