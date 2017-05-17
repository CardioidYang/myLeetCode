class Solution {
public:
	vector<int> findAnagrams(string s, string p) {
		vector<int> output;
		if (s.size() == 0 || p.size() == 0)
			return output;

		vector<int> sMap(26, 0);
		vector<int> pMap(26, 0);

		for (int i = 0; i<p.size(); i++) {
			sMap[s[i] - 'a']++;
			pMap[p[i] - 'a']++;

		}

		for (int i = p.size(); i<s.size(); i++) {
			if (sMap == pMap)
				output.push_back(i - p.size());
			sMap[s[i] - 'a']++;
			sMap[s[i - p.size()] - 'a']--;
		}
		if (sMap == pMap)
			output.push_back(s.size() - p.size());

		return output;
	}
};