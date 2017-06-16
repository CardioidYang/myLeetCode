class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int i=0;
        int n=nums.size();
        while(i<n)
            nums[i]==val?nums[i]=nums[--n]:i++;
        return n;
    }
};