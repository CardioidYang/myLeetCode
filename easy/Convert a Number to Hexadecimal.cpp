class Solution {
public:
	string toHex(int num) {
		if (num == 0)
			return "0";
		string myHex = "0123456789abcdef";

		int count = 0;
		string output;
		while (num && count<8) {
			output = myHex[num & 0xf] + output;
			num >>= 4;
			count++;
		}
		return output;
	}
};