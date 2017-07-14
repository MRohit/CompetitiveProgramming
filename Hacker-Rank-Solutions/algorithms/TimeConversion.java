package algorithms.warmup;

import java.util.*;

public class TimeConversion {

	/**
	 * @param args
	 */
	static String timeConversion(String s) {
		String[] str=s.split(":");
		int hr=Integer.valueOf(str[0]);
		int min=Integer.valueOf(str[1]);
		String st=str[2];
		int sec=Integer.valueOf(st.substring(0, 1));
		System.out.println(hr+":"+min+":"+sec);
		
		if(s.contains("PM")){
			if(hr==12)
				hr=00;
			hr=hr+12;
		}
		
		return hr+":"+min+":"+sec;
        // Complete this function
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.next();
        String result = timeConversion(s);
        System.out.println(result);
    }

}
