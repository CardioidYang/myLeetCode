class Solution {
public:
	bool wordPattern(string pattern, string str) {
		unordered_map<char, int> pMap;
		unordered_map<string, int>sMap;

		istringstream in(str);
		int i = 0;
		int n = pattern.size();
		for (string word; in >> word; i++) {
			if (i == n || pMap[pattern[i]] != sMap[word])
				return false;
			pMap[pattern[i]] = sMap[word] = i + 1;
		}

		return i == n;
	}
};
