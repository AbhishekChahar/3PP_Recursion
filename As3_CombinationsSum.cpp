// // Input: k = 3, n = 9
// // Output: [[1,2,6],[1,3,5],[2,3,4]]
// // Explanation:
// // 1 + 2 + 6 = 9
// // 1 + 3 + 5 = 9
// // 2 + 3 + 4 = 9
// // There are no other valid combinations.

// // Step 1--> Think of Recursion Function
// // Step 2--> Think of termination condition
// // Step 3--> Think of the recursion tree


// #include<bits/stdc++.h>
// using namespace std;


// void printcombinations( int i,int sum,int k, vector< int> &v, int &count){
//   if (i==k){
//     if(sum ==0){
//       count++;
//       cout<<count;
//     }
//   }

//   printcombinations(i+1, sum-v[i],k,v,count);
//   printcombinations(i+1, sum,  k, v,count);

// }

// int main(){

//   int sum,k;
//   cin>>sum>>k;

//   vector<int>v(9);
//   iota(v.begin(), v.end(),1);
  
//   for(auto x: v){
//     cout<<x;
//   } 

//   int count=0;
//   cout<<endl;
//   int i=0;
//   printcombinations(i,  sum, k , v, count);

  



//   return 0;
// }