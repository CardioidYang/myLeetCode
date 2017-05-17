class Solution {
public:
	vector<vector<int>> generate(int numRows) {
		vector<vector<int>> output;
		if (numRows == 0)
			return output;
		if (numRows >= 1) {
			vector<int> thisRow;
			thisRow.push_back(1);
			output.push_back(thisRow);
		}

		for (int i = 2; i <= numRows; i++) {
			vector<int> thisRow;
			vector<int> preRow = output[i - 2];
			for (int j = 0; j <= preRow.size(); j++) {
				if (j == 0)
					thisRow.push_back(preRow[0]);
				else if (j == preRow.size())
					thisRow.push_back(preRow[preRow.size() - 1]);
				else {
					int thisNum = preRow[j - 1] + preRow[j];
					thisRow.push_back(thisNum);
				}

			}
			output.push_back(thisRow);
		}
		return output;
	}
};