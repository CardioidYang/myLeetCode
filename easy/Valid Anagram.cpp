class Solution {
public:
	bool isAnagram(string s, string t) {
		int num = 0;
		if (s.size() != t.size()) {
			return false;
		}
		for (int i = 0; i<s.size(); i++) {
			num ^= (s[i] ^ t[i]);
		}
		return num == 0;
	}
};