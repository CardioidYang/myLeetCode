class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		vector<int> output;
		if (nums.size() == 0)
			return output;

		unordered_map<int, int> myMap;
		for (int i = 0; i<nums.size(); i++) {
			if (!myMap[nums[i]]) {
				//printf("add %d to map\n", target-nums[i]);
				myMap[target - nums[i]] = i + 1;
			}
			else {
				//printf("match\n");
				output.push_back(myMap[nums[i]] - 1);
				output.push_back(i);
			}
		}
		return output;
	}
};