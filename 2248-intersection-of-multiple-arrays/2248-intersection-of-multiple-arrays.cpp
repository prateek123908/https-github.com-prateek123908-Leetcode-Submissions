class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int>ans;
        vector<int>freq(1001,0);
        for(const auto& row:nums){
            for(int val:row){
                freq[val]++;
            }
        }
        for(int i=1;i<freq.size();i++){
            if(freq[i]==nums.size())
            ans.push_back(i);
        }
      return ans;
    }
};