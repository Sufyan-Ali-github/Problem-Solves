var isPalindrome = function(s) {
    let p1=0;
    let p2=s.length-1;
    s=s.toLowerCase();
    while(p1<p2){
        let char1=s.charAt(p1);
        let char2=s.charAt(p2);
        if(!(char1>='a' && char1<='z' || char1>='0' && char1<='9')){
            p1++;
            continue;
        }
        if(!(char2>='a' && char2<='z' || char2>='0' && char2<='9')){
            p2--;
            continue;
        }
        if(char1 != char2){
            return false;
        }
        p1++;
        p2--;

    }
    return true;
    
};