class Solution {
public:
    std::string trim(const std::string& str,const std::string& whitespace = " \t")
    {
        const auto strBegin = str.find_first_not_of(whitespace);
        if (strBegin == std::string::npos)
            return ""; // no content

        const auto strEnd = str.find_last_not_of(whitespace);
        const auto strRange = strEnd - strBegin + 1;

        return str.substr(strBegin, strRange);
    }
    
    int lengthOfLastWord(string s) {
        int cnt=0;
        s=trim(s);
        for(int i=0; i<s.size(); i++){
            if(s[i]!=' ') cnt++;
            else{
                if(i!=s.size()-1)
                    cnt=0;
            }
        }
        return cnt;
    }
};
