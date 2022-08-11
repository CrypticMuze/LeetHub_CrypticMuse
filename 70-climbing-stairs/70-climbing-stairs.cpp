class Solution {
public:
    int climbStairs(int n) {
        long long int numWaysToCurrStep = 1, numWaysToNextStep = 1;
        while (n--)
            numWaysToCurrStep = (numWaysToNextStep += numWaysToCurrStep) - numWaysToCurrStep;
        return numWaysToCurrStep;
    }
};