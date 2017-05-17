class Solution {
public:
	int findComplement(int num) {
		int countNumMSB = 0;
		int numCopy = num;
		while (numCopy) {
			numCopy >>= 1;
			countNumMSB++;
		}
		if (countNumMSB != 0) {
			int passFilter = 0;
			for (int j = 1; j<countNumMSB; j++) {
				passFilter += 1;
				passFilter <<= 1;
			}
			passFilter += 1;
			return passFilter & ~num;
		}
		else {
			return 1;
		}
	}
};