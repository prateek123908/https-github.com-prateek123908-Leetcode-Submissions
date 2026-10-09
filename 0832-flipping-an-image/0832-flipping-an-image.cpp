class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(int i=0;i<image.size();i++){
            int st=0,end=image.size()-1;
           while(st<end){ 
           image[i][st]=1-image[i][st];
           image[i][end]=1-image[i][end];
           swap(image[i][st],image[i][end]);
           st++;
           end--;
        }
           if(st==end) image[i][st]=1-image[i][st];
        }
        return image;
    }
};