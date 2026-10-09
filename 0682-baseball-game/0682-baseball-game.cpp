class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int>v;
        int sum=0;
        for(int i=0;i<operations.size();i++){
               int n=v.size();
            if(operations[i]=="+") {
               v.push_back(v[n-1]+v[n-2]);
            
                
            }
            else if(operations[i]=="D"){
                v.push_back(2*v[n-1]);
            }
            else if(operations[i]=="C"){
                v.pop_back();
            }
            else{
                v.push_back(stoi(operations[i]));
            }
        }
        for(int i=0;i<v.size();i++){
                    sum+=v[i];
        }
        return sum;
    }
};