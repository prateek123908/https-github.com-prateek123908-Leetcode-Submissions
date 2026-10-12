class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int>ans(num_people,0);
        int x=1;
        while(candies>0){
            for(int i=0;i<ans.size();i++){
               if(candies>=x){
                ans[i]+=x;
                candies-=x;
                x++;
               }
              else {
                ans[i]+=candies;
                candies=0;
              }
            }
        }
        return ans;
    }
};