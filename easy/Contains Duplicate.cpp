class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> myMap;
        for(int thisNum : nums) {
            if(myMap[thisNum]==0)
                myMap[thisNum]++;
            else
                return true;
        }
        return false;
    }
};