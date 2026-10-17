class Solution {
public:
    int passThePillow(int n, int time) {
        bool flag=false;
        int i=0;
        while(time--){
         if(!flag) i++;
         else i--;
         if(i==n-1) flag=true;
         if(i==0) flag=false;
        }
        return i+1;
    }
};