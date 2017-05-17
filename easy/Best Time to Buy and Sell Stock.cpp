class Solution {
public:
	int maxProfit(vector<int>& prices) {
		//Kadane's Algorithm find Maximum subarray problem
		if (prices.size() == 0)
			return 0;
		int maxCur = 0;
		int maxSoFar = 0;
		for (int i = 1; i<prices.size(); i++) {
			maxCur = max(0, maxCur += (prices[i] - prices[i - 1]));
			maxSoFar = max(maxSoFar, maxCur);
		}
		return maxSoFar;
	}
};