import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int a[][] = new int[n][n];
        int firstDiagonal = 0, secondDiagonal = 0,difference = 0;
        for(int a_i=0; a_i < n; a_i++){
            for(int a_j=0; a_j < n; a_j++){
                a[a_i][a_j] = in.nextInt();
            }
        }
        for(int a_i=0; a_i < n; a_i++){
            for(int a_j=0; a_j < n; a_j++){
                if (a_i == a_j)
                    firstDiagonal = firstDiagonal + a[a_i][a_j];
                if ((a_i + a_j) == ((n+1)-2))
                    secondDiagonal = secondDiagonal + a[a_i][a_j];
            }
        }
        difference = Math.abs(firstDiagonal - secondDiagonal);
        System.out.println(difference);
    }
}
