class Solution {
public:
    int maxDepth(string s) {
        int cnt= 0, depth = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='('){
                cnt++;
            }
            if(s[i]==')'){
                cnt --;
            }
            depth = max(cnt, depth);
        }
        return depth;
    }
};
