public class FindTheDifference {
    public char findTheDifference(String s, String t) {
        String finalString = s + t;
        char c=0;
        for (int i=0;i<finalString.length();i++) {
            c ^=(char)finalString.charAt(i);
        }
        return c;
    }
}
