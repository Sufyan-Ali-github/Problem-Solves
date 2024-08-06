class Solution {
public:
    int getValue(char ch){
        switch(ch){
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0;
        }
    }

    int romanToInt(string s) {
        int size = s.length();
        int result = 0;

        for (int i = 0; i < size; i++) {
            char w = s.at(i);
            if( ((i+1)< size) && (getValue(w) < getValue(s.at(i+1))) ){
                result -= getValue(w);
            }else{
                result += getValue(w);
            }
           
        }
        
        return result;
        
    }
};