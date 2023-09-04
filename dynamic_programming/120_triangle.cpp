class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        vector<vector<int>> dp(n);
        for(int i = 0;i<n;i++){
            int m = triangle[i].size();
            for(int j = 0;j<m;j++){
                if(i == n-1){
                    dp[i].push_back(triangle[i][j]);
                }else{
                    dp[i].push_back(-1);
                }
            }
        }
        for(int i = n-2;i>=0;i--){
            int m = triangle[i].size();
            for(int j = 0;j<m;j++){
                dp[i][j] = triangle[i][j]+min(dp[i+1][j], dp[i+1][j+1]);
            }
        }
        return dp[0][0];
    }
};

//2023-09-02
//Yvecca
//120. Triangle
//Bottum-up dp (tabulation)
//bottum-up traversal then ends at 0,0