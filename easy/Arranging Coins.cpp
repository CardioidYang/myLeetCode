class Solution {
public:
    int arrangeCoins(int n) {
        /*long start=1, end=n;
        
        while(start<end) {
            long mid=start+(end-start+1)/2;
            if((mid+1)*mid/2<=n)
                start=mid;
            else
                end=mid-1;
        }
        return end;*/
        
        return sqrt(2 * (long)n + 1 / 4.0) - 1 / 2.0;
    }
};