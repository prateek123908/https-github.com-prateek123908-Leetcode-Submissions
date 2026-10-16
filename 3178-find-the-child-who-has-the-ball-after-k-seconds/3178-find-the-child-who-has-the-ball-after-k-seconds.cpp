class Solution {
public:
    int numberOfChild(int n, int k) {
        int i=0;
        bool flag=true;
        while(k--){
          if(flag) i++;
          else i--;
          
          if(i==n-1) flag=false;
          else if(i==0) flag=true;
          
        }
        return i;
    }
};