class Solution {
public:
	char findTheDifference(string s, string t) {
		char outChar = 0;
		for (char thisChar : s) {
			outChar ^= thisChar;
		}
		for (char targetChar : t) {
			outChar ^= targetChar;
		}
		return outChar;
	}
};