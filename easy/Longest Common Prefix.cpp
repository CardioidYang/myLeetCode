class Solution {
public:
	string longestCommonPrefix(vector<string>& strs) {
		string output = "";

		if (strs.size() == 0) return output;
		if (strs.size() == 1) return strs[0];

		int commonEnd = 0;
		int strLen = strs.size();
		int minSize = INT_MAX;
		for (int i = 0; i<strLen; i++) {
			if (strs[i].size()<minSize) {
				minSize = strs[i].size();
			}
		}

		while (commonEnd<minSize) {
			//printf("iter %d %c %c\n", commonEnd, strs[0][commonEnd], strs[1][commonEnd]);
			bool allTheSame = false;
			for (int i = 1; i<strLen; i++) {
				if (strs[0][commonEnd] != strs[i][commonEnd]) break;
				if (i == strLen - 1) allTheSame = true;
			}
			if (allTheSame) {
				output.push_back(strs[0][commonEnd]);
				commonEnd++;
			}
			else {
				break;
			}
		}
		cout << "output: " << output << endl;

		return output;
	}
};