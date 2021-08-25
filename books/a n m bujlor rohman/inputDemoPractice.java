import java.util.Scanner;

public class inputDemoPractice{
    public static void main (String[] args){
        Scanner takeInput = new Scanner (System.in);

        System.out.println("Enter first number: ");
        int firstNumber = takeInput.nextInt();

        System.out.println("Enter second Number: ");
        int secondNumber = takeInput.nextInt();

        int result = firstNumber + secondNumber;
        System.out.print("");
        System.out.println(firstNumber+" + "+secondNumber+" = "+result);
    }
}
