class Solution {
public:
	vector<int> constructRectangle(int area) {
		int width = sqrt(area);
		while (area%width != 0) {
			width -= 1;
		}
		vector<int> output;
		output.push_back(area / width);
		output.push_back(width);
		return output;
	}
};