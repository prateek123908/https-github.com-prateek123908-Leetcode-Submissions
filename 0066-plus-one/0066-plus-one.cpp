class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        vector<int>ans;
        int a=digits[n-1]+1;
        int rem=a/10;
        ans.push_back(a%10);
        for(int i=digits.size()-2;i>=0;i--){
            int a=digits[i]+rem;
            rem=a/10;
            ans.push_back(a%10);
        }
        if(rem>0) ans.push_back(rem);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};