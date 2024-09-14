void reverseString(vector<char>& s) {
        
        int st=0;
        int en=s.size()-1;
        while(st<en){
            char swap;
            swap=s[st];
            s[st]=s[en];
            s[en]=swap;   
            st++;
            en--;
        }

    }