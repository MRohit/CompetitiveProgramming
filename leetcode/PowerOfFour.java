public class PowerOfFour {
    public static void main (String argsp[]) {
        int n = 16;
        int x = n & (n-1);
        int cnt = 0;
        if ( n > 0 && x == 0) {
            while (n > 1) {
                cnt++;
                n>>=1;
            }
            if (cnt %2 ==0){
                System.out.println("Number is power of 4");
            } else {
                System.out.println("Number is not power of 4");
            }

        }

    }
}
