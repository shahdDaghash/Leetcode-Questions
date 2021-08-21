class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int category;
        if(ruleKey=="type") category = 0;
        else if(ruleKey == "color") category = 1;
        else category = 2;
        
        int cnt=0;
        
        int n = items.size();
        for(int i=0; i<n; i++){
            if(items[i][category] == ruleValue) cnt++;
        }
        
        return cnt;
    }
};
