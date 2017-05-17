class Solution {
public:
	vector<string> fizzBuzz(int n) {
		vector<string> outStr(n);
		for (int i = 0; i<n; i++) {
			if ((i + 1) % 3 == 0) {
				outStr[i] += string("Fizz");
			}
			if ((i + 1) % 5 == 0) {
				outStr[i] += string("Buzz");
			}

			if (outStr[i] == "") {
				outStr[i] += to_string(i + 1);
			}
		}
		return outStr;
	}
};