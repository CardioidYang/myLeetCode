class Solution {
public:
	string addBinary(string a, string b) {
		int i = a.size() - 1;
		int j = b.size() - 1;
		string output = (i>j) ? a : b;
		int k = (i>j) ? i : j;

		int carry = 0;
		while (i >= 0 || j >= 0) {
			int thisBit = ((i >= 0) ? a[i--] - '0' : 0) + ((j >= 0) ? b[j--] - '0' : 0) + carry;
			output[k--] = (thisBit % 2) + '0';
			carry = thisBit / 2;
		}
		if (carry == 1)
			output = "1" + output;

		//reverse(output.begin(),output.end());
		return output;
	}
};