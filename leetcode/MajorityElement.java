import java.util.Arrays;

public class MajorityElement {

    int getCountInRange (int arr[], int data, int low, int high) {
        int count=0;
        for (int i = low;i <= high; i++) {
            if (arr[i] == data) {
                count++;
            }
        }
        return count;
    }
    public int getMajorityElementRec (int arr[], int low, int high) {
        int mid = 0;

        // if array contains only one element then return low
        if (low == high)
            return arr[low];

        mid = (high-low)/2 + low;

        int left = getMajorityElementRec(arr, low, mid);
        int right = getMajorityElementRec(arr, mid+1, high);

        // if left and right are equal then return left;
        if(left == right)
            return left;

        // get count of element in each sub part and then return the majority element.
        int leftcount = getCountInRange(arr, left, low, high);
        int rightcount = getCountInRange (arr, right, low, high);

        return leftcount > rightcount ? left : right;
    }
    public int getMajorityElement (int []arr) {
        return getMajorityElementRec(arr, 0, arr.length-1);
    }
    public static void main (String argsp[]) {
        int arr[] = {2,2,1,1,1,2,2};
        Arrays.sort(arr);

        System.out.println ("Majority Element:"+arr[arr.length/2]);

        System.out.println("Below output is using divide and conquer");
        MajorityElement obj = new MajorityElement ();
        System.out.println("Majority Element:"+obj.getMajorityElement(arr));
    }
}
