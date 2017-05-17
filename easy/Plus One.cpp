class Solution {
public:
	vector<int> plusOne(vector<int>& digits) {

		int carry = 1;
		for (int i = 0; i<digits.size(); i++) {
			int thisDigit = digits[digits.size() - 1 - i] + carry;
			carry = thisDigit / 10;
			digits[digits.size() - 1 - i] = thisDigit % 10;
		}
		if (carry == 1)
			digits.insert(digits.begin(), 1);

		return digits;
	}
};