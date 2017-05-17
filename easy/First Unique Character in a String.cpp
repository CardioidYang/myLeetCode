class Solution {
public:
	int firstUniqChar(string s) {
		vector<int> myCount(26, 0);
		for (char eachChar : s) {
			myCount[eachChar - 'a']++;
		}
		for (int i = 0; i<s.size(); i++) {
			if (myCount[s[i] - 'a'] == 1) {
				return i;
			}
		}
		return -1;
	}
};