class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        if(mat.size()*mat[0].size()!=r*c) return mat;
      vector<int>a;
      vector<vector<int>> m(r,vector<int>(c,0));
      for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[0].size();j++){
            a.push_back(mat[i][j]);
        }
      }  
      int idx=0;
      for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            m[i][j]=a[idx];
            idx++;
        }
      }
      return m;
    }
};