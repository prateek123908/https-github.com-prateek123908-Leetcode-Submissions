class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        if(timeSeries.size()<=1) return duration;
        long long cnt=duration;
        for(int i=1;i<timeSeries.size();i++){
            if(timeSeries[i]<=timeSeries[i-1]+duration-1){
                cnt-=timeSeries[i-1]+duration-timeSeries[i];
            }
            cnt+=duration;    
        }
        return cnt;
    }
};