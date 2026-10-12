class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        for(int i=1;i<nums.size();i++){
            nums[i]+=nums[i-1];
        }
        for(int i=0;i<nums.size();i++){
            int l,r;
            if(i==0) l=0;
            else l=nums[i-1];
            if(i==nums.size()-1) r=0;
            else
             r=nums[nums.size()-1]-nums[i];
            if(l==r) return i;
        }
        return -1;
    }
};