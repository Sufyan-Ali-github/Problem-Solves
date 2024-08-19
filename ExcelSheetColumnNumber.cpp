class Solution {
public:
    int titleToNumber(string columnTitle) {
    int sum = 0, p = 0;
    int n = columnTitle.length();
    
    for (int i = n - 1; i >= 0; i--) {
        int tmp = columnTitle[i] - 'A' + 1;
        sum = sum + (int)pow(26, p++) * tmp;
    }
    
    return sum;
}
};