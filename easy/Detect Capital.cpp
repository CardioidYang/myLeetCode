class Solution {
public:
	bool detectCapitalUse(string word) {
		if (word.size() <= 1) {
			return true;
		}
		else {
			int count = 0;
			for (int i = 1; i<word.size(); i++) {
				if (word[i] <= 'z' && word[i] >= 'a') {
					count++;
				}
				else if (word[i] <= 'Z' && word[i] >= 'A') {
					count += 2;
				}
			}
			if (count == word.size() - 1) {
				return true;
			}
			else if (count == (word.size() - 1) * 2) {
				if (word[0] <= 'Z' && word[0] >= 'A') {
					return true;
				}
				else {
					return false;
				}
			}
			else {
				return false;
			}
		}
	}
};