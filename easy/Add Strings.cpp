class Solution {
public:
	string addStrings(string num1, string num2) {
		int i = num1.size() - 1, j = num2.size() - 1, carry = 0;
		string sum = "";
		while (i >= 0 || j >= 0 || carry) {
			int thisBitSum = carry;
			if (i >= 0)
				thisBitSum += (num1[i--] - '0');
			if (j >= 0)
				thisBitSum += (num2[j--] - '0');

			carry = thisBitSum / 10;
			sum.insert(0, 1, (thisBitSum % 10 + '0'));
		}
		if (carry>0)
			sum = sum + "1";

		//reverse(sum.begin(),sum.end());

		return sum;
	}
};