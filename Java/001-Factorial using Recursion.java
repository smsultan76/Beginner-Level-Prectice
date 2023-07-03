import java.util.Scanner;
public class recfactorial {
    static int factorial(int n){
        if(n==1)
        return 1;
        else
        return n*factorial(n-1);
    }
    public static void main(String[] args) {
        int n, fact;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter Number: ");
        n =sc.nextInt();
        fact= factorial(n);
        System.out.println("Factorial of "+n+" is:\t"+fact);
    }}
