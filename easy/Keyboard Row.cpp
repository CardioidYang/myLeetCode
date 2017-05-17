class Solution {
public:
	int rowNumberOfChar(const char inChar) {
		if (inChar == 'a' || inChar == 's' || inChar == 'd' || inChar == 'f' || inChar == 'g' ||
			inChar == 'h' || inChar == 'j' || inChar == 'k' || inChar == 'l') {
			return 2;
		}
		else if (inChar == 'A' || inChar == 'S' || inChar == 'D' || inChar == 'F' || inChar == 'G' ||
			inChar == 'H' || inChar == 'J' || inChar == 'K' || inChar == 'L') {
			return 2;
		}
		else if (inChar == 'q' || inChar == 'w' || inChar == 'e' || inChar == 'r' || inChar == 't' ||
			inChar == 'y' || inChar == 'u' || inChar == 'i' || inChar == 'o' || inChar == 'p') {
			return 1;
		}
		else if (inChar == 'Q' || inChar == 'W' || inChar == 'E' || inChar == 'R' || inChar == 'T' ||
			inChar == 'Y' || inChar == 'U' || inChar == 'I' || inChar == 'O' || inChar == 'P') {
			return 1;
		}
		else {
			return 3;
		}
	}

	vector<string> findWords(vector<string>& words) {
		vector<string> outputwords;

		for (int wordsCount = 0; wordsCount<words.size(); wordsCount++) {
			string currentWord = words[wordsCount];
			int charCount = 0;
			int curlineNum = 0;
			int prelineNum = 0;
			do {
				curlineNum = rowNumberOfChar(currentWord[charCount]);
				if (charCount == 0) {
					prelineNum = curlineNum;
				}
				charCount++;
				if (prelineNum != curlineNum) {
					break;
				}
				else if (charCount == currentWord.size()) {
					outputwords.push_back(currentWord);
				}
				prelineNum = curlineNum;
				/*for(int i=0;i<curlineNum;i++) {
				outputwords.push_back(currentWord);
				}*/
			} while (charCount<currentWord.size());
		}
		return outputwords;
	}
};