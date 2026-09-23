class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int duplicate;
        int missing=-1;
        long tsum=n*(n+1)/2;
        long sum=0;
    for(int i=1;i<nums.size();i++){
        if(nums[i-1]==nums[i]) {
            duplicate=nums[i];
         break;
        }
        
    }
    for(int i=0;i<n;i++){
        sum+=nums[i];
    }
    missing=duplicate+(tsum-sum);
    return {duplicate,missing};
        
    }
};