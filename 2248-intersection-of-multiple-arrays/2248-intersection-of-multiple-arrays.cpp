class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        unordered_map<int, int> freqMap;
        vector<int>ans;
        int rowNo=1;
        for (const auto& row : nums) {
        for (int val : row) {
            freqMap[val]++; 
            if(freqMap[val]>rowNo) freqMap[val]=rowNo;
        }
        rowNo++;
    }
      for(const auto& pair:freqMap){
        if(pair.second==nums.size())
        ans.push_back(pair.first);
      } 
      sort(ans.begin(),ans.end()); 
      return ans;
    }
};