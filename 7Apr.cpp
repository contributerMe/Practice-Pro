#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int maxDotProduct(int n, int m, vector<int>a, vector<int>b)
{
  // Create a max heap to keep track of the smallest n-m elements from `a[]`
  priority_queue<int> pq;

  for (int i = 0; i < n; i++)
  {
    pq.push(a[i]);
    if (pq.size() > n - m)
    {
      pq.pop();
    }
  }

  while (!pq.empty())
  {

    for (int i = 0; i < n; i++)
    {
      if (a[i] == pq.top())
      {
        a[i] = 0;
      }
    }
    pq.pop();
  }

  int ans = 0;
  int i = 0, j = 0;
  while (i < n && j < m)
  {
    if (a[i] != 0)
    {
      ans += a[i] * b[j];
    }
    if (a[i] == 0)
    {
      i++;
    }
    else
    {
      i++, j++;
    }
  }

  return ans;
}
int main()
{
   int n = 3;
   int m = 2;
   vector<int>a(n);
   vector<int>b(m);
   a = {1,10,1};
   b = {10,10};
   // stucks where there is repetition in array a ->
   // can be managed by adjusting pq.pop() and adding more coonditional
   int ans = maxDotProduct(n,m,a,b);
  cout<<ans;
  return 0;
}