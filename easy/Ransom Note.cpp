class Solution {
public:
	bool canConstruct(string ransomNote, string magazine) {
		vector<int> myMap(26);

		//full version
		/*for(int i=0;i<magazine.size();i++) {
		myMap[magazine[i]-'a']++;
		}
		for(int i=0;i<ransomNote.size();i++) {
		myMap[ransomNote[i]-'a']--;
		if(myMap[ransomNote[i]-'a']<0){
		return false;
		}
		}
		return true;*/

		//read and check version
		int i = 0, j = 0;
		while (i<ransomNote.size()) {
			if (j<magazine.size()) {
				if (ransomNote[i] == magazine[j]) {
					i++;
				}
				else { // add to map or check map

					   //add map
					myMap[magazine[j] - 'a']++;


					//check map
					if (myMap[ransomNote[i] - 'a']>0) {
						myMap[ransomNote[i] - 'a']--;
						i++;
					}
				}
				j++;
			}
			else {
				//check map
				if (myMap[ransomNote[i] - 'a']>0) {
					myMap[ransomNote[i] - 'a']--;
					i++;
				}
				else {
					return false;
				}
			}

		}

		return i >= ransomNote.size();
	}
};