class Solution {
public:
	string countAndSay(int n) {
		if (n == 1)
			return "1";
		if (n == 2)
			return "11";

		string output = "";
		string preStr = countAndSay(n - 1);
		char curChar = preStr[0];
		int count = 1;
		for (int i = 1; i<preStr.size(); i++) {
			if (curChar == preStr[i])
				count++;
			else {
				output.append(to_string(count));
				output.push_back(curChar);
				curChar = preStr[i];
				count = 1;
			}
		}
		output.append(to_string(count));
		output.push_back(curChar);
		return output;
	}
};