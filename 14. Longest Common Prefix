class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        if(strs.size()==0) return "";
        
        string lcp=strs[0];
        
        for(int i=1; i<strs.size(); i++){
            string currentWord = strs[i];
            int j=0;
            
            while(j<currentWord.size() && j<lcp.size() && currentWord[j]==lcp[j])
                j++;
            
            if(j==0) return "";
            
            lcp = currentWord.substr(0,j);
        }
        return lcp;
    }
};
