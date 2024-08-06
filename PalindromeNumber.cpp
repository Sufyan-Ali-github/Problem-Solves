class Solution {
public:
 bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        } else {
            long long int reverseNum = 0;
            int temp = x;

            while (temp != 0) {
                int digit = temp % 10;
                reverseNum = reverseNum * 10 + digit;
                temp = temp / 10;
            }
            if(reverseNum == x){
                return true;
            }else{
                return false;
            }

        
        }
    }
};

    
        
    
