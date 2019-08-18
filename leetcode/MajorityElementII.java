import java.util.*;

public class MajorityElementII {

    public static void main (String argsp[]) {
        int arr[] = {1,1,1,3,3,2,2,2,2};
        List<Integer> lst = new ArrayList();
        int cnt1 = 0, cnt2 = 0;

        int cand1 = 0, cand2 = 1;
        for (int i=0;i<arr.length;i++) {
            if(cand1 == arr[i]) {
                cnt1++;
            } else if (cand2 == arr[i]) {
                cnt2++;
            } else if(cnt1==0) {
                cnt1=1;
                cand1 = arr[i];
            } else if (cnt2==0) {
                cnt2=1;
                cand2=arr[i];
            } else {
                cnt1--;
                cnt2--;
            }
        }
        cnt1=0;cnt2=0;
        for (int i=0;i<arr.length;i++) {
            if(cand1 == arr[i]) {
                cnt1+=2;
            } else
                cnt1--;
            if(cand2 == arr[i]) {
                cnt2+=2;
            } else
                cnt2--;

        }
        if(cnt1 > 0)
            lst.add(cand1);
        if(cnt2 > 0)
            lst.add(cand2);

        System.out.println(lst);
    }

}
