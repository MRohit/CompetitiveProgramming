public class PowerOfTwo {
    public static void main (String argsp[]) {
        long n = 4;
        if ((n & n - 1) == 0) {
            System.out.println("yes");
        } else {
            System.out.println("no");
        }
    }
}
