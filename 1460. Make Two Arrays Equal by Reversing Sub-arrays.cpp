class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        map<int,int> nums;
        for(int n: target){
            nums[n]++;
        }
        for(int n: arr){
            if(!nums.count(n)){
                return false;
            }
            nums[n]--;
            if(nums[n]==0){
                nums.erase(n);
            }
        }
        return true;
    }
};
