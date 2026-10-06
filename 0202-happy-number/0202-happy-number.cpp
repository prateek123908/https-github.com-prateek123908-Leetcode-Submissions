class Solution {
public:
    long long getSum(long long n){
        long long sum=0;
        while(n>0){
            int dgt=n%10;
            sum+=dgt*dgt;
            n/=10;
        }
        return sum;
    }
    bool isHappy(int n) {
        long long slow=n;
        long long fast=n;
        do{
            slow=getSum(slow);
            fast=getSum(getSum(fast));
        }while(slow!=fast);
        if(slow==1) return true;
        else
        return false;
    }
};