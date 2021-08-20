class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<char, int> m;
        for(int i=0; i<jewels.size(); i++){
            if(!m.count(jewels[i])) m[jewels[i]]=1; 
        }
        int cnt=0;
        for(int i=0; i<stones.size(); i++){
            if(m[stones[i]]==1) {
                cnt++;
                
            }
        }
        return cnt;
    }
};
