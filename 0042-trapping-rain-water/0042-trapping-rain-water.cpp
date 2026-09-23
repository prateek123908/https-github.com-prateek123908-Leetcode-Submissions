class Solution {
public:
    int trap(vector<int>& height) {
        int trp=0;
        int n=height.size();
      vector<int>leftMax(n,0);  
      vector<int>rightMax(n,0); 
      leftMax[0]=height[0];
      int lm=height[0]; 
     for(int i=1;i<n;i++){
        lm=max(lm,height[i]);
        leftMax[i]=lm;
     }
     rightMax[n-1]=height[n-1];
      int rm=height[n-1]; 
     for(int i=n-2;i>=0;i--){
        rm=max(rm,height[i]);
        rightMax[i]=rm;
     }

     for(int i=0;i<n;i++){
        trp+=min(leftMax[i],rightMax[i])-height[i];
     }
     return trp;
    }
};