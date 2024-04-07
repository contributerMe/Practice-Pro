#include <bits/stdc++.h> 

using namespace std;
vector<int> printMatrixDiagonal(vector<vector<int>>mat) 
{ 
    int n = mat.size(); // n rows 
	int i = 0, j = 0; 
    vector<int>ans;
	bool isUp = true; 
    int k = 0;
	while(k < n*n) { 
		if (isUp) { 
			for (; i >= 0 && j < n; j++, i--) { 
				ans.push_back(mat[i][j]);
				k++; 
			} 

			// Set i and j according to direction 
			if (i < 0 && j <= n - 1) 
				i = 0; 
			if (j == n) 
				i = i + 2, j--; 
		} 

		// If isUp = 0 then traverse up to down 
		else { 
			for (; j >= 0 && i < n; i++, j--) { 
                ans.push_back(mat[i][j]);
				k++; 
			} 

			// Set i and j according to direction 
			if (j < 0 && i <= n - 1) 
				j = 0; 
			if (i == n) 
				j = j + 2, i--; 
		} 

		// Revert the isUp to change the direction 
		isUp = !isUp; 
	} 
} 

int main() 
{ 
	vector<vector<int>>mat = { { 1, 2, 3 }, 
						{ 4, 5, 6 }, 
						{ 7, 8, 9 } }; 
	 
    vector<int>ans = printMatrixDiagonal(mat);
    for(auto x : ans) 
    cout<<x <<" ";
	return 0; 
} 
