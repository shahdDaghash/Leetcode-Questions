class Solution {
public:
    int strStr(string haystack, string needle) {
        int index=haystack.find(needle);
        if(needle.size()==0) return 0;
        else if(index!=string::npos)
            return index;
        else return -1;
        
    }
};
