class SingleNumberII {
    public int singleNumber(int[] nums) {
        int once = 0, twice = 0;
        for (int i=0;i<nums.length;i++) {
            once = ~ twice & (once ^ nums[i]);
            twice = ~once & (twice ^ nums[i]);
        }
        return once;
    }
}
