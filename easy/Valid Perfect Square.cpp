class Solution {
public:
	bool isPerfectSquare(int num) {
		long long tmp = num;
		while (tmp*tmp>num) {
			tmp = (tmp + num / tmp) / 2;
		}
		return tmp*tmp == num;
	}
};