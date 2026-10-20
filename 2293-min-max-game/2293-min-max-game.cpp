class Solution {
public:
    int minMaxGame(vector<int>& nums) {
       int n=nums.size();
        while(n>1){
        vector<int>ans(n/2);
       int j=0;
       for(int i=0;i<n;i+=2){
            if(j%2==0) 
                ans[j]=min(nums[i],nums[i+1]);
                else
                ans[j]=max(nums[i],nums[i+1]);
            
        j++;
       }
       nums=ans;
       n/=2;
        }
        
        return nums[0];

    }
};