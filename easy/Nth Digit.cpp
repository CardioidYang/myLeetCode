class Solution {
public:
	int findNthDigit(int n) {
		//find which group it is
		long myBase = 9;
		int myDigit = 1;
		while (n - myBase*myDigit>0) {
			n -= myBase*myDigit;
			myDigit++;
			myBase *= 10;
		}
		printf("n=%d, digit %d\n", n, myDigit);

		//find the number is
		int myindex = n%myDigit;
		if (myindex == 0) myindex = myDigit;
		printf("myIndex %d\n", myindex);

		long myNumber = ((myindex == myDigit) ? n / myDigit - 1 : n / myDigit) + pow(10, myDigit - 1);
		printf("Num: %ld\n", myNumber);

		for (int i = myindex; i<myDigit; i++) {
			myNumber /= 10;
		}
		printf("Num: %ld\n", myNumber);
		return myNumber % 10;
	}
};