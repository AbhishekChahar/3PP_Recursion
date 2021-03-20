// All subsets or say return the powerset of a given set.

// Input: nums = [1,2,3]
// Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]

//Step 1-> yes /  no Recursion
// Step 2 -> Think of recursion program

#include<bits/stdc++.h>
using namespace std;

vector<bool> GenerateBinary(int n){
  vector<bool>res;
  while(n!=0){
    res.push_back(n%2);
    n/=2;
  }
  reverse(res.begin(), res.end());
  cout<<endl;
  for(auto x: res){
    cout<<x;
  }
  return res;
}

void powerset(int arr[], int n){

  for(int i = 0 ; i<= pow(2, n)-1 ; i++){
    vector<bool>binary = GenerateBinary(i);
    
  }
}

int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0; i<n ; i++){
    cin>>arr[i];
  }
  powerset(arr,n);  
  return 0;
}