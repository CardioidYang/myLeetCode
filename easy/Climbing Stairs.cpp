class Solution {
public:
	int climbStairs(int n) {
		if (n <= 0)
			return 0;
		else if (n == 1)
			return 1;
		else if (n == 2)
			return 2;
		else {
			int preNum = 2;
			int curNum = 3;
			for (int i = 0; i<n - 3; i++) {
				int tmp = curNum;
				curNum += preNum;
				preNum = tmp;
			}
			return curNum;
		}
	}
};