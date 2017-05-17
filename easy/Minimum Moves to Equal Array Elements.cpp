class Solution {
public:
	int minMoves(vector<int>& nums) {
		int sum = 0;
		int min = INT_MAX;
		for (int i = 0; i<nums.size(); i++) {
			min = (min>nums[i]) ? nums[i] : min;
			sum += nums[i];
		}

		return sum - (min*nums.size());
	}
};