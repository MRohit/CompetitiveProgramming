public class ReverseBits {
    public static void main (String argsp[]) {

        int num = 11;//1101
        int rev = 0;
        while (num > 0) {
            rev <<= 1;
            if ((num & 1) == 1) {
                rev ^= 1;
            }
            num >>= 1;
        }

        System.out.println("After reversing all the bits:"+rev);
    }
}
