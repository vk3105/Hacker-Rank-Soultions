import java.io.*;
import java.util.*;
import java.math.BigInteger;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        String fact = factorial(n).toString();
        System.out.println(fact);
    }
    
    public static BigInteger factorial(int number) { 
        BigInteger factorial = BigInteger.ONE; 
        for (int i = number; i > 0; i--) { 
            factorial = factorial.multiply(BigInteger.valueOf(i)); 
        } 
        return factorial; 
    }


}
