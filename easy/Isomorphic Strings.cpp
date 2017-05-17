class Solution {
public:
	bool isIsomorphic(string s, string t) {
		if (s.size() != t.size())
			return false;

		int sMap[256], tMap[256];
		for (int i = 0; i<256; i++) {
			sMap[i] = tMap[i] = -1;
		}

		for (int i = 0; i<s.size(); i++) {
			if (sMap[s[i]] != tMap[t[i]])
				return false;
			sMap[s[i]] = tMap[t[i]] = i;
		}

		return true;
	}
};