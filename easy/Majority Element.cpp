class Solution {
public:
	int majorityElement(vector<int>& nums) {
		unordered_map<int, int> myMap;
		for (int thisNum : nums) {
			myMap[thisNum]++;
		}
		int number = -1;
		int count = -1;
		for (auto& it : myMap) {
			if (it.second>count) {
				count = it.second;
				number = it.first;
			}
		}
		return number;
	}
};