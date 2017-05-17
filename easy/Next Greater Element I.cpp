class Solution {
public:
	vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
		stack<int> myStack;
		unordered_map<int, int> myMap;
		for (int n : nums) {
			while (myStack.size() && myStack.top() < n) {
				myMap[myStack.top()] = n;
				myStack.pop();
			}
			myStack.push(n);
		}


		vector<int>outNum;
		for (int targetNum : findNums) {
			if (myMap.count(targetNum)) {
				outNum.push_back(myMap[targetNum]);
			}
			else {
				outNum.push_back(-1);
			}
		}
		return outNum;
	}
};