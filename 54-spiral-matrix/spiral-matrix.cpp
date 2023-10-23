class Solution {
public:
		vector<int> spiralOrder(vector<vector<int>>& mat) {
		int m = mat.size(), n = mat[0].size();
		int top = 0, bottom = m - 1;
		int left = 0, right = n - 1;
		int total = m * n;

		vector<int> res;
		
		while (res.size() < total) {

			for (int j = left; j <= right && res.size() < total; j++)
				res.push_back(mat[top][j]);
			
					top++;
			for (int j = top; j <= bottom && res.size() < total; j++)
				res.push_back(mat[j][right]);
			
					right--;
			for (int j = right; j >= left && res.size() < total; j--)
				res.push_back(mat[bottom][j]);
			
					bottom--;
			for (int j = bottom; j >= top && res.size() < total; j--)
				res.push_back(mat[j][left]);
			
					left++;
		}
	  return res;
	}
};