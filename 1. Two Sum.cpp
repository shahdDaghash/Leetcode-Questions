class Solution {
    public int[] twoSum(int[] nums, int target) {
        int [] res = new int[2];
        for(int i=0;i<nums.length;i++){
            for(int j=0;j<nums.length; j++){
                if(nums[j]==(target-nums[i])&&i!=j){
                res[0]=i;
                res[1]=j;
                return res;
            }
            }
        }
        res[0]=0;
        res[1]=0;
        return res;
        
    }
}
