class Solution {
public:
	int findContentChildren(vector<int>& g, vector<int>& s) {

		sort(g.begin(), g.end(), [](int a, int b) {return a<b; });
		sort(s.begin(), s.end(), [](int a, int b) {return a<b; });


		int count = 0;
		int i = g.size() - 1;
		int j = s.size() - 1;
		while (i >= 0 && j >= 0) {
			if (s[j] >= g[i]) { //child find his cookie
				count++;
				j--;
				i--;
			}
			else if (s[j]<g[i]) {
				i--;
			}
		}
		return count;
	}
};