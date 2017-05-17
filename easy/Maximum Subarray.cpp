class Solution {
public:
	int maxSubArray(vector<int>& nums) {
		//Kadane's Algorithm find Maximum subarray problem
		if (nums.size() == 0)
			return 0;
		int maxCur = nums[0];
		int maxSoFar = nums[0];
		for (int i = 1; i<nums.size(); i++) {
			maxCur = max(nums[i], nums[i] + maxCur);
			maxSoFar = max(maxSoFar, maxCur);
		}
		return maxSoFar;
	}
};