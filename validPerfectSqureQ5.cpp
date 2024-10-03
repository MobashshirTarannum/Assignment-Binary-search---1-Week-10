//leet code
//Given a number ‘n’. Predict whether ‘n’ is a valid perfect square or not.

class Solution {
public:
    bool isPerfectSquare(int num) {
        int lo=0;
        int hi=num;
        while(lo<=hi){
            int mid =lo+(hi-lo)/2;
            long long m= (long long) mid;
            long long y= (long long) num;
            if(m*m==y) return true;
            if(m*m>y) hi=mid-1;
            else lo=mid+1;
        }
        return false;
    }
};