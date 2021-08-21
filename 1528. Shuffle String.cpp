class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        vector<pair<int, char>> v;
        for(int i=0; i<s.size(); i++){
            v.push_back(make_pair(indices[i], s[i]));
        }
        sort(v.begin(), v.end());
        string res = "";
        for(int i=0; i<v.size(); i++){
            res+=v[i].second;
        }
        return res;
    }
};
