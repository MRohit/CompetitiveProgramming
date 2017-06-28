import java.io.BufferedReader;
import java.io.InputStreamReader;
 
class TestClass {
    public static void main(String args[] ) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine());
        StringBuilder strb = new StringBuilder();
        long k,m,nm;
		while (T-- > 0) {
 
			k = Long.parseLong(br.readLine());
			m = (long) (Math.log10(k) + 1);
			nm = ((k+1)*m)- (long)((Math.pow(10,m) -1)/9);
			
			strb.append(nm + "\n");
		}
		System.out.println(strb.toString());
        strb = null;
        br = null;
        System.gc();
    }
}