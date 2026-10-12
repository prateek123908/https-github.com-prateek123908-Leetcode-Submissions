class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int lSum=0,rSum=0,tSum=0;
        for(int i=0;i<nums.size();i++){
            tSum+=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            rSum=tSum-lSum-nums[i];
            if(lSum==rSum) return i;
            lSum+=nums[i];
        }
        return -1;
    }
};