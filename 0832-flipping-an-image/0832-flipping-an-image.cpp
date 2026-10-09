class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(int i=0;i<image.size();i++){
            int st=0,end=image.size()-1;
           while(st<=end){ 
            if(st==end) {

           if(image[i][st]==1) image[i][st]=0;
           else image[i][st]=1;
            }
            else{
           if(image[i][st]==1) image[i][st]=0;
           else image[i][st]=1;
           if(image[i][end]==1) image[i][end]=0;
           else image[i][end]=1;
           swap(image[i][st],image[i][end]);
            }
           st++;
           end--;
        }
        }
        return image;
    }
};