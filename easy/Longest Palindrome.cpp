class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> myMapA(26, 0);
        vector<int> myMapa(26, 0);
        for(int i=0;i<s.size();i++) {
            if(s[i]>='a' && s[i]<='z')
                myMapa[s[i]-'a']++;
            else
                myMapA[s[i]-'A']++;
        }
        int output=0;
        for(int num : myMapA) {
            if(num%2==0)
                output+=num;
            else
                output+=(num-1);
        }
        for(int num : myMapa) {
            if(num%2==0)
                output+=num;
            else
                output+=(num-1);
        }
        if(output!=s.size())
            output++;
        
        return output;
    }
};