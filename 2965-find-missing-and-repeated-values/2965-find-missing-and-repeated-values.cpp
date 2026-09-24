class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int missing=-1,repeated=-1;
        int n=grid.size();
       vector<int>v(n*n+1,0);
       for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            v[grid[i][j]]++;
        }
       } 
       for(int i=1;i<v.size();i++){
        if(v[i]==0) missing=i;
        else if(v[i]==2) repeated=i;
       }
       return {repeated,missing};
    }
};