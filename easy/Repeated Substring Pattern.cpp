class Solution {
public:
	bool repeatedSubstringPattern(string s) {
		if (s.size()<2)
			return false;
		string strMap;
		int myMapHead = 0;
		for (int i = 0; i<s.size(); i++) {
			if (strMap.size()<1)
				strMap.push_back(s[i]);
			else { // map is enough
				if (myMapHead >= strMap.size())
					myMapHead = 0;
				if (s[i] == strMap[myMapHead]) {
					//match, so move head
					myMapHead++;
				}
				else { // s[i]!=strMap[myMapHead]
					if (s[i] == strMap[0]) { //this char is equal to first
						myMapHead = 0;
					}
					else { //and not the start char
						strMap.push_back(s[i]);
					}
				}
			}
		}
		if (myMapHead == strMap.size())
			return true;
		else
			return false;
	}
};