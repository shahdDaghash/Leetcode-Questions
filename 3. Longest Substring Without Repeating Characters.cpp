class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        deque <char> seenLetters;
        int l = 0, r=0;
        int res=0;
        
        while(r<s.size()){
            if(find(seenLetters.begin(), seenLetters.end(), s[r]) == seenLetters.end()){
                seenLetters.push_back(s[r]);
                res = max(res, r-l+1);
                r++;
            }
            else{
                seenLetters.pop_front();
                l++;
            }
        }
        return res;
    }
};
