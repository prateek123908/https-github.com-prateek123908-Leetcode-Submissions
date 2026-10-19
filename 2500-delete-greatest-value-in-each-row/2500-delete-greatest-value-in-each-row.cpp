class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int sum=0;
        int j=grid[0].size()-1;
        for(auto& row:grid){
            sort(row.begin(),row.end());
        }
        while(j>=0){
            int maxi=-1e9;
           for(int i=0;i<grid.size();i++){
               maxi=max(maxi,grid[i][j]);
           }
           sum+=maxi;
           j--;
        }
        return sum;
       
    }
};