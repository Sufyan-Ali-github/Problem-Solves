function  Common(s1,s2){
    let num=Math.min(s1.length,s2.length)
    let com=""
    for(let i=0; i<num; i++){
        if(s1.charAt(i) == s2.charAt(i)){
            com += s1.charAt(i)
        }else{
            break;
        }
    }
    return com;
}
var longestCommonPrefix = function(strs) {
    let res=strs[0]
    for(let i=1; i <strs.length; i++){
        res=Common(res,strs[i])
    }
    if(res.length != 0){
        return res
    }else{
        return ""
    }

    
};