class Solution {
public:
	bool checkRecord(string s) {
		int countA = 0;
		int continuousB = 0;
		for (int i = 0; i<s.size(); i++) {
			if (s[i] == 'A') {
				countA++;
			}
			if (s[i] == 'L') {
				continuousB++;
			}
			else {
				continuousB = 0;
			}
			if (countA == 2 || continuousB == 3) {
				return false;
			}
		}
		return true;
	}
};