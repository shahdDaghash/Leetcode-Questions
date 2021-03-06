class Solution {
public:

    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int sum = 0;
        mp[0] = 1;
        int cnt = 0;
        
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
            if(mp.count(sum-k)){
                cnt+=mp[sum-k];
            }
            mp[sum]++;
        }
        return cnt;
    }
};
