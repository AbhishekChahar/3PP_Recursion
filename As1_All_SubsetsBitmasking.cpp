// // All subsets or say return the powerset of a given set.

// // Input: nums = [1,2,3]
// // Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]

// // Step 1 -> yes /  no Recursion 
// // Step 2 -> Think of recursion program

// #include<bits/stdc++.h>
// using namespace std;

// vector<vector<int>> subsets(vector<int>& nums) {
//     vector<int>subset;
//     int  subsets = pow(2,nums.size());
//     vector<vector<int>>res(subsets);
//     for(int i=0;i<subsets;i++){
//         subset.clear();
//         for(int j=0; j<nums.size();j++){
//             if(i & (1<<j)){    // important statement to check the ith bit 
//                 res[i].push_back(nums[j]);
//             }
//         }
//         // cout<<endl<<" "<<i<<" :" ;
//         // for(int o=0;o<res.size();o++){
//         //   for(int p=0;p<res[o].size();p++){
//         //     cout<<res[o][p]<<" ";
//         //   }
//         //   cout<<endl;
//         // }
//     }
 
//     return res;
// }

// vector<vector<int>> powerset(int arr[], int n){
//   vector<int>subset;
//   int  subsets = pow(2,n);
//   vector<vector<int>>res(subsets);
  
//   for(int i=0;i<subsets;i++){
//     subset.clear();
//     for(int j=0; j<n;j++){
//       if(i & (1<<j)){    // important statement to check the ith bit of an integer is set or not gives positive values.
//         res[i].push_back(arr[j]);
//       }
//     }
//     cout<<endl<<" "<<i<<" :" ;
//     for(int o=0;o<res.size();o++){
//       for(int p=0;p<res[o].size();p++){
//         cout<<res[o][p]<<" ";
//       }
//       cout<<endl;
//     }
//   }
 
//   return res;
// }

// int main(){
//   int n;
//   cin>>n;
//   int arr[n];
//   for(int i=0; i<n ; i++){
//     cin>>arr[i];
//   }
//   powerset(arr,n);  
//   return 0;
// }