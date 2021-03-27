//print fibonacci using recusion


#include<bits/stdc++.h>
using namespace std;
int fib (int num){
     if(num==1) return 0;
     if(num==2)  return 1;

     return fib(num-1)+fib(num-2);
}

int main(){
  int n;
  cin>>n;

  for(int i=1; i<=n; i++){
    cout<<fib(i)<<" ";
  }

  return 0;
}