class Solution {
public:
    int isWinner(vector<int>& p1, vector<int>& p2) {
        int p1Cnt=0;
        int p2Cnt=0;
        for(int i=0;i<p1.size();i++){
            if((i>=1 && p1[i-1]==10) || (i>=2 && p1[i-2]==10)) p1Cnt=p1Cnt+2*p1[i];
            else p1Cnt+=p1[i];
        }
        for(int i=0;i<p2.size();i++){
            if((i>=1 && p2[i-1]==10) || (i>=2 && p2[i-2]==10)) p2Cnt=p2Cnt+2*p2[i];
            else p2Cnt+=p2[i];
        }
        if(p1Cnt>p2Cnt) return 1;
        else if(p1Cnt<p2Cnt) return 2;
        return 0;
    }
};