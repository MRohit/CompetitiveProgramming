import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;
public class HelloWorld {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        double mealCost = scan.nextDouble(); // original meal price
        int tipPercent = scan.nextInt(); // tip percentage
        int taxPercent = scan.nextInt(); // tax percentage
        double totalCost = 0.0;
        scan.close();
        
        // Write your calculation code here.
        double tip = (mealCost * (double)tipPercent)/100;
        double tax = (mealCost * (double) taxPercent)/100;
        totalCost = (double) mealCost + (tip + tax);
        // Print your result
        System.out.println("The total meal cost is "+Math.round(totalCost)+" dollars.");
    }
}
