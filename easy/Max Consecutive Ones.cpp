class Solution {
public:
	int findMaxConsecutiveOnes(vector<int>& nums) {
		int MaxCount = 0;
		int tmpMax = 0;
		for (int myNum : nums) {
			if (myNum == 1) {
				MaxCount++;
			}
			else {
				if (MaxCount>tmpMax)
					tmpMax = MaxCount;
				MaxCount = 0;
			}
		}
		if (MaxCount>tmpMax)
			tmpMax = MaxCount;
		return tmpMax;
	}
};