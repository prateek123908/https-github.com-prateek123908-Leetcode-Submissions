class Solution {
public:
    int getMaximumGenerated(int n) {
        if(n==0 || n==1) return n;
        vector<int>v(n+1);
        v[0]=0;
        v[1]=1;
        for(int i=2;i<v.size();i++){
            if(i%2) v[i]=v[i/2]+v[(i/2)+1];
            else v[i]=v[i/2];
        }
        sort(v.begin(),v.end());
        return v[v.size()-1];
    }
};