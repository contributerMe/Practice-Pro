#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int solve(int n){
  // your code her
        long ans = 1;
        if(n==1){
            return ans;
        }
        ans = n/2;
        return ans+1;
}
int main()
{
  int n = 5;
 cout<<solve(n);
  return 0;
}