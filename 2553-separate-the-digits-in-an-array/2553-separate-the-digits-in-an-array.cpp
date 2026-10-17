class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            vector<int>a;
            int curr=nums[i];
            while(curr>0){
                int rem=curr%10;
                a.push_back(rem);
                curr/=10;
                 }
                 for(int j=a.size()-1;j>=0;j--)
                 ans.push_back(a[j]);
        }
        return ans;
    }
};