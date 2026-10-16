class Solution {
public:
    int maxOperations(vector<int>& nums) {
        int sum=nums[0]+nums[1];
        int cnt=0;
        for(int i=1;i<nums.size();i+=2){
            if(nums[i]+nums[i-1]==sum)cnt++;
            else break;
        }
        return cnt;
    }
};