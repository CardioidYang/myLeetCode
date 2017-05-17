class Solution {
public:
	int lengthOfLastWord(string s) {
		istringstream in(s);
		string tmp;
		for (string word; in >> word;) {
			tmp = word;
		}
		return tmp.size();
	}
};