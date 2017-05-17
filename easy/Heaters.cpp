class Solution {
public:
	int findRadius(vector<int>& houses, vector<int>& heaters) {

		sort(houses.begin(), houses.end());
		sort(heaters.begin(), heaters.end());

		int maxRadius = 0;
		int index = 0;
		for (int i = 0; i<houses.size(); i++) {
			while (index + 1<heaters.size() && (abs(heaters[index] - houses[i]) >= abs(heaters[index + 1] - houses[i])))
				index++;
			maxRadius = max(maxRadius, abs(heaters[index] - houses[i]));
		}

		return maxRadius;
	}
};