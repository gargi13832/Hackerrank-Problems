import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {
//private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        
        if(N%2!=0)
            System.out.println("Weird");
        else if(N==2||N==4)
            System.out.println("Not Weird");
        else if(6<=N&&N<=20)
            System.out.println("Weird");
        else if(N>20)
            System.out.println("Not Weird");
        //scanner.close();
    }
}
