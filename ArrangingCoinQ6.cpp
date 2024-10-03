//leetcode 441
//You have n coins and you want to build a staircase with these coins. The staircase consists of k
// rows where the ith row has exactly i coins. The last row of the staircase may be incomplete.
// Given the integer n, return the number of complete rows of the staircase you will build.

class Solution {
public:
    int arrangeCoins(int n) {
        long max=1;
        long lo=1;
        long hi=n;
        while(lo<=hi){
            long mid=lo+(hi-lo)/2;
            long k=mid;
            if(k*(k+1)/2>n) hi=mid-1;
            if(k*(k+1)/2<=n) {
                max=k;   
                lo=mid+1;
            }
    }
    return (int)max;
    }
};