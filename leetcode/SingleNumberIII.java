class Solution {
    public int[] singleNumber(int[] nums) {
        int[] result = new int[2];
        int xor = 0;
        for (int i=0;i<nums.length;i++){
            xor ^=nums[i];
        }

        int diff = xor &-xor;
        for (int i=0;i<nums.length;i++) {
            if ((nums[i] & diff) == 0) {
                result[0] ^= nums[i];
            } else {
                result[1] ^= nums[i];
            }
        }
        return result;
    }
}
