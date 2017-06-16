class Solution {
public:
    string convertToBase7(int num) {
        int absNum=abs(num);
        
        string output="";
        do{
            output=to_string(absNum%7)+output;
        }while(absNum/=7);
        
        if(num<0)
            output="-"+output;
        
        return output;
    }
};