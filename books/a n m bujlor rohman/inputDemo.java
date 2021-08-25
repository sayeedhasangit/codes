import java.util.Scanner;

public class inputDemo{
    public static void main (String[] args){
        Scanner takeInput = new Scanner (System.in);

        System.out.print("Enter First Number: "); 
        int firstNumber = takeInput.nextInt();
        System.out.println("Enter Second Number: ");
        int secondNumber = takeInput.nextInt();
        
        int result = firstNumber + secondNumber;
        System.out.println(firstNumber + " + " + secondNumber + " = " + result);
    }
}
