class Solution {
public:
	string reverseStr(string s, int k) {
		for (int i = 0; i<s.size(); i = i + 2 * k) {
			int myStart = i;
			int myEnd = i + k - 1;
			if (myEnd >= s.size())
				myEnd = s.size() - 1;
			for (int j = 0; j<(myEnd - myStart + 1) / 2; j++) {
				swap(s[myStart + j], s[myEnd - j]);
			}
		}
		return s;
	}
};