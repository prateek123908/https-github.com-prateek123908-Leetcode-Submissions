class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        int duplicate=-1;
        int missing=-1;
        
    for(int i=1;i<=n;i++){
        int cnt=0;
        for(int j=0;j<n;j++){
            if(nums[j]==i) cnt++;
        }
        if (cnt==0) missing=i;
        if (cnt==2) duplicate=i; 
    }
    
    return {duplicate,missing};
        
    }
};