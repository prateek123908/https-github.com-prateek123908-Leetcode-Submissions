class Solution {
public:
    vector<int> circularGameLosers(int n, int k) {
        vector<int>a(n+1,0);
        vector<int>b;
        int pos=1;
        a[pos]=1;
        int cnt=1;
        while(true){
            int nextPos=(pos-1+cnt*k)%n+1;
             if(a[nextPos]==1) break;
             pos=nextPos;
             a[pos]=1;
             cnt++;
        }
        for(int i=1;i<a.size();i++){
            if(a[i]==0) b.push_back(i);
        }
        return b;
    }
};