public class OneComplement {
    public int findComplement(int num) {
        int cnt = 0;
        int n = num;
        while (n!=0) {
            cnt++;
            n>>=1;
        }
        //int p = (int)Math.pow (2,cnt-1) - 1;
        return ((1 << cnt) - 1) ^ num;
    }
}
