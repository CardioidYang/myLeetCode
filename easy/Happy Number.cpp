class Solution {
public:
	int calsquareSum(int n) {
		int sum = 0, t = 0;
		while (n) {
			t = (n % 10);
			sum += t*t;
			n /= 10;
		}
		return sum;
	}
	bool isHappy(int n) {

		int i, j;
		i = j = n;
		do {
			i = calsquareSum(i);
			j = calsquareSum(calsquareSum(j));
		} while (i != j);
		return i == 1;
	}
};