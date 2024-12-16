class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        int total_time =arrivalTime+delayedTime;
        return total_time%24;
        
    }
};