public class NumberOf1Bits {
    public static void main (String argsp[]) {
        int n = 11;
        int cnt=0;
        for (int i = 0;i<32;i++) {
            if ((n & 1) == 1) {
                cnt++;
            }
            n>>=1;
        }
        System.out.println("Count of 1s:"+cnt);
    }
}
