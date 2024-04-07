#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//strictly increasing arry
//similar to longest incr subseq
// find len of longest increassing subsequence 
//return n - lis
// lis is a DP problem
int longestIncrSub(vector<int>&arr){
        int n=arr.size();
        vector<int>dp(n,1);
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(arr[i]>arr[j] && arr[i]-arr[j]>=i-j){
                    dp[i]=max(dp[i], 1+dp[j]);
                }
            }
        }
        int maxi=0;
        for(auto it:dp){
            maxi=max(maxi, it);
        }
        return maxi;
    }

    int min_operations(vector<int>& nums) {
        // Code here
        int l=longestIncrSub(nums);
        int n=nums.size();
        return n-l;
    }
int main()
{
  vector<int>v = {1, 2, 3, 6, 5, 4};
  int ans = min_operations(v);
  cout<<ans;
  return 0;
}