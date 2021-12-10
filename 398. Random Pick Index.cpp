class Solution {
public:
    map<int,queue<int>>mp;
    Solution(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]].push(i);
        }
    }
    
    int pick(int target) {
        int k = mp[target].front();
        mp[target].pop();
        mp[target].push(k);
        return k;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */
