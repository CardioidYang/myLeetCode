class Solution {
public:
	vector<int> twoSum(vector<int>& numbers, int target) {
		unordered_map<int, int> myMap;
		vector<int> output;
		for (int i = 0; i<numbers.size(); i++) {
			int thisCompliment = abs(numbers[i] - target);
			if (myMap.count(numbers[i])) {
				output.push_back(myMap[numbers[i]] + 1);
				output.push_back(i + 1);

			}
			else {
				myMap[thisCompliment] = i;
			}
		}
		return output;
	}
};