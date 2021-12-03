class Solution {
public:
    int minAddToMakeValid(string s) {
        stack <char> st;
        int cnt =0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='('){
                st.push('(');
            }
            else{
                if(!st.empty()){
                    st.pop();
                    cnt+=2;
                }
                
            }
        }
        return s.size()-cnt;
    }
};
