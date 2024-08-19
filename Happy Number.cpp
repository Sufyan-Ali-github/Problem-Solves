class Solution {
public:
    bool isHappy(int n) {
        int sum=0;
        int rem=0;
        while(1){
            while(n>0){
                rem=n%10;
                sum +=pow(rem,2);
                n=n/2;
            }
            if(sum==1 || sum/10==0 && sum !=7){
                break;
            }
            n=sum;
            sum=0;
            
        }
        if(sum == 1){
            return true;
        }else{
            return false;
        }
    }
};