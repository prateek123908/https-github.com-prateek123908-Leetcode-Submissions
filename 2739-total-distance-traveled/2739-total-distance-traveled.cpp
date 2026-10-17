class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        int dist=0;
        int cnt=0;
        while(mainTank>0){
            cnt++;
            dist++;
            mainTank--;
            if(cnt%5==0 && additionalTank>0){
                mainTank+=1;
                additionalTank-=1;
            }
        }
        return dist*10;
    }
};