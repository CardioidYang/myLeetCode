class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
		if (nums.size() == 0)
			return 0;
		int head = 0, count = 1;
		for (int i = 1; i<nums.size(); i++) {
			if (nums[head]<nums[i]) {
				head++;
				nums[head] = nums[i];
				count++;
			}
		}
		printf("head %d, count %d\n", head, count);
		return count;
	}
};