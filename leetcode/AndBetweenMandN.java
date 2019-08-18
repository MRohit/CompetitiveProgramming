public class AndBetweenMandN {
    public static void main (String argsp[]){
        int m =5, n = 7;
        int i = 0;
        while (m != n) {
            m>>=1;
            n>>=1;
            i++;
        }
        int num = m<<i;
        System.out.println("Number between "+m+ " & "+n+" after doing AND of all numbers in between is:"+num);
    }
}
