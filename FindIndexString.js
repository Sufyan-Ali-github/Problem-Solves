// is mein  jo hamara [needle] name ho ga  wo poori [haystack] mein dhondhe ga aur us ka index return kare ga
// otherwise return -1 kar de ga

function findString(str,word){
    const position = str.indexOf(word);
    if(position == -1){
       return -1;
    }else{
       return position;
    }
}
var strStr = function(haystack, needle) {
   const res=findString(haystack, needle);
   return res; 
};