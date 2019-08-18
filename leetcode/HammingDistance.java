public class HammingDistance {
    public static void main (String argsp[]) {
        int x = 1, y = 4;
        int res = 0;
        int xor = x ^ y;
        while (xor != 0) {
            res = res + (xor & 1);
            xor >>=1;
        }
        System.out.println("Hamming distance:"+res);
    }
}
