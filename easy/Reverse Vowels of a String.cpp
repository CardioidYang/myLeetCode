class Solution {
public:
	string reverseVowels(string s) {
		vector<int> myVowels;
		for (int i = 0; i<s.size(); i++) {
			if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
				s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'
				)
				myVowels.push_back(i);
		}

		for (int i = 0; i<myVowels.size() / 2; i++) {
			swap(s[myVowels[i]], s[myVowels[myVowels.size() - i - 1]]);
		}
		return s;
	}
};