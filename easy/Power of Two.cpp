class Solution {
public:
	bool isPowerOfTwo(int n) {
		if (n>1)
			while (n % 2 == 0)n >>= 1;
		return n == 1;
	}
};