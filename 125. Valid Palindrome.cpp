class Solution {
public:
    bool validPalindrome(string s) {
        int left = 0, right = s.size() -1;
        while(right>left){
            if(s[left] != s[right]){
                //check if the rest is palindrome
                return isValidPal(s, left+1, right) || isValidPal(s, left, right-1);
            }
            right--;
            left++;
        }
        return true;
    }
    
    
    bool isValidPal (string s, int left, int right){
        while(left<right){
            if(s[left] != s[right]){
                return false;
            }
            right --;
            left ++;
        }
        return true;
    }
};
