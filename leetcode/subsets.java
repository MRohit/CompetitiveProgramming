import java.util.*;

class subSets {
    public List<List<Integer>> subsets(int[] nums) {
        int setSize = nums.length;
        //int powerSetSize = (Integer) Math.pow (2, setSize);
        List<List<Integer>> result = new ArrayList<List<Integer>>();

        for (int counter = 0; counter < Math.pow (2, setSize); counter++) {
            List<Integer> subSet = new ArrayList ();
            for (int i = 0; i < setSize; i++) {
                if ((counter & 1<<i) != 0) {
                    subSet.add(nums[i]);
                }
            }
            result.add(subSet);
        }
        return result;
    }
}
