#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define modd int(1e9+7)
long long sumSubstrings(string s);
int main()
{
  string s = "1224";
  long long ans  = sumSubstrings(s);
  cout<<ans;

  return 0;
}


long long sumSubstrings(string s){
        int n = s.size();
        vector<long long>dp(n,0);
        dp[0] = s[0] - '0';
        for(int i = 1 ; i< n ;i++){
            dp[i] = (i+1)*(s[i] - '0') + 10*(dp[i-1]);
        }
        long long sum = 0 ;
        for(int i = 0 ; i < n ; i++){
            sum += dp[i] % modd;
        }
        return sum ;
    }