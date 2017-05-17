class Solution {
public:
	int missingNumber(vector<int>& nums) {
		int output = 0;
		for (int i = 0; i<nums.size() + 1; i++) {
			output ^= i;
		}
		for (int i = 0; i<nums.size(); i++) {
			output ^= nums[i];
		}
		return output;
	}
};