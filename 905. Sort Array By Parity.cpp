class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        if(nums.size() != 1){
            int step = 0;
            for(int i=0; i<nums.size(); i++){
                if(nums[i]%2 != 0) step++;
                else{
                    int swap = nums[i-step];
                    nums[i-step] = nums[i];
                    nums[i] = swap;
                }
            }
        }
        return nums;
    }
};
