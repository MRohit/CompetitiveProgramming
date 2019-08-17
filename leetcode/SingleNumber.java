class Solution {
    public int singleNumber(int[] nums) {
        int distinctElement = 0;
        for (int i = 0; i < nums.length; i++) {
            distinctElement ^=nums[i];
        }
        return distinctElement;
    }
}
