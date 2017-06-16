class Solution {
public:
    int romanCharToInt(char a) {
        switch(a) {
            case 'I':
                return 1;
            case 'V':
                return 5;
            case 'X':
                return 10;
            case 'L':
                return 50;
            case 'C':
                return 100;
            case 'D':
                return 500;
            case 'M':
                return 1000;
        }
        return 0;
    }
    int romanToInt(string s) {
        
        int sum=romanCharToInt(s[0]);
        for(int i=1;i<s.size();i++) {
            int preValue=romanCharToInt(s[i-1]);
            int curValue=romanCharToInt(s[i]);
            
            if(preValue<curValue) {
                sum+=(curValue-2*preValue);
            }else {
                sum+=curValue;
            }
        }
        return sum;
    }
};