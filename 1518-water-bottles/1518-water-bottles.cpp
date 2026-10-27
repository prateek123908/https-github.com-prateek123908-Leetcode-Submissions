class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int sum=0;
        int rem=numBottles;
        while(rem>=numExchange){
            sum+=rem/numExchange;
            rem=(rem/numExchange)+(rem%numExchange);
        }
        sum+=numBottles;
        return sum;
        
    }
};