class Solution {
public:
	bool containsNearbyDuplicate(vector<int>& nums, int k) {
		unordered_map<int, int> myMap;
		for (int i = 0; i<nums.size(); i++) {
			if (!myMap[nums[i]])
				myMap[nums[i]] = i + 1;
			else {
				int sum = 0;
				if ((i - (myMap[nums[i]] - 1)) <= k)
					return true;
				myMap[nums[i]] = i + 1;
			}
		}
		return false;
	}
};