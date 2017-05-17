class Solution {
public:
	int islandPerimeter(vector<vector<int>>& grid) {
		int count = 0;
		int repeat = 0;
		for (int i = 0; i<grid.size(); i++) {
			for (int j = 0; j<grid[i].size(); j++) {
				if (grid[i][j] == 1) {
					count++;
					if (i - 1 >= 0)
						if (grid[i - 1][j] == 1)
							repeat++;
					if (j - 1 >= 0)
						if (grid[i][j - 1] == 1)
							repeat++;
				}
			}
		}

		return count * 4 - repeat * 2;
	}
};