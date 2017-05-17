class Solution {
public:
	int singleNumber(vector<int>& nums) {
		int ret_num = 0;
		for (int thisNum : nums) {
			ret_num ^= thisNum;
		}
		return ret_num;
	}
};