// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
	int guessNumber(int n) {
		int lowBound = 1;
		int highBound = n;
		int targetNum = -1;

		while (targetNum == -1) {
			int thisGuess = (highBound - lowBound + 1) / 2 + lowBound;
			printf("guess %d\n", thisGuess);
			int retGuess = guess(thisGuess);
			if (retGuess == -1) {//target num is lower
				printf("lower\n");
				highBound = thisGuess - 1;
			}
			else if (retGuess == 1) {//target num is higher
				printf("higher\n");
				lowBound = thisGuess + 1;
			}
			else {
				printf("got it\n");
				targetNum = thisGuess;
			}
		}
		return targetNum;
	}
};