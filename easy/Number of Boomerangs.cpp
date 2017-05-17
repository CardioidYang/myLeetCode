class Solution {
public:
	int numberOfBoomerangs(vector<pair<int, int>>& points) {
		int myCount = 0;
		for (auto it = points.begin(); it != points.end(); it++) {
			unordered_map<int, int> myMap;
			for (auto it2 = points.begin(); it2 != points.end(); it2++) {
				int diffpowX = pow(it->first - it2->first, 2.0);
				int diffpowY = pow(it->second - it2->second, 2.0);
				int dist = diffpowX + diffpowY;
				myCount += 2 * myMap[dist];
				myMap[dist]++;
			}
		}
		return myCount;
	}
};