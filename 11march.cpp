#include<iostream>
#include<bits/stdc++.h>
using namespace std;
	int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int n, int x)
	{
	    int size = n * n;
        int left = 0, right = size - 1;
        int count = 0;
        
        while (left < size && right >= 0)
        {
            int sum = mat1[left / n][left % n] + mat2[right / n][right % n];
            
            if (sum == x) {
                left++;
                right--;
                count++;
            }
            else if (sum > x)
                right--;
            else
                left++;
        }
        
        return count;
	}
int main()
{
    
    return 0;
}