class Solution {
public:
	bool checkPerfectNumber(int num) {
		if (num == 1)
			return false;
		vector<int> divisors;
		divisors.push_back(1);
		int myBound = sqrt(num);
		//printf("my Bound %d\n", myBound);
		for (int i = 2; i <= myBound; i++) {
			if (num%i == 0) {
				divisors.push_back(i);
				divisors.push_back(num / i);
			}
		}

		int sum = 0;
		for (int i = 0; i<divisors.size(); i++) {
			//printf("%d ", divisors[i]);
			sum += divisors[i];
		}
		return sum == num;
	}
};