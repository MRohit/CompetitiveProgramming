public class CountBitsinGiveRange {
    public static void main (String argsp[]) {
        int num = 16;
        int []result = new int[17];
        int pow = 1, p = 1;
        for (int i = 1; i<= num; i++) {
            if (i == pow) {
                result [i] = 1;
                pow <<=1;
                p = 1;
            } else {
                result[i] = result[p] + 1;
                p++;
            }
        }
        for (int n : result) {
            System.out.println(n +",");
        }
    }
}
