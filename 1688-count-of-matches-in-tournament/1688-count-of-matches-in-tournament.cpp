class Solution {
public:
    int numberOfMatches(int n) {
        int m,sum=0;
        int t=n;
        while(t!=1){
            m=t/2;
            sum+=m;
            if(t%2) t=m+1;
            else t=m;
        }
        return sum;
    }
};