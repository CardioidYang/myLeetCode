class Solution {
public:
	vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
		unordered_map<int, int> myMap;
		for (int i = 0; i<nums1.size(); i++) {
			myMap[nums1[i]]++;
		}

		vector<int> output;
		unordered_map<int, bool> hadWrote;
		for (int i = 0; i<nums2.size(); i++) {
			if (myMap[nums2[i]] >0 && !hadWrote[nums2[i]]) {
				output.push_back(nums2[i]);
				hadWrote[nums2[i]] = true;
			}
		}
		return output;
	}
};