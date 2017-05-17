class Solution {
public:
	vector<string> findRelativeRanks(vector<int>& nums) {
		priority_queue<pair<int, int>> pq;
		for (int i = 0; i<nums.size(); i++) {
			pq.push(make_pair(nums[i], i));
		}

		vector<string> output(nums.size());
		for (int i = 0; i<nums.size(); i++) {
			if (i == 0) output[pq.top().second] = string("Gold Medal");
			else if (i == 1) output[pq.top().second] = string("Silver Medal");
			else if (i == 2) output[pq.top().second] = string("Bronze Medal");
			else
				output[pq.top().second] = to_string(i + 1);
			pq.pop();
		}
		return output;
	}
};