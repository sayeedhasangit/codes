import java.util.Scanner;

public class inputPractice{
    public static void main(String[] args){
        Scanner inputNumber = new Scanner(System.in);

        System.out.println("Enter your first number: ");
        int firstNumber = inputNumber.nextInt();

        System.out.println("Enter your secondNumber: ");
        int secondNumber = inputNumber.nextInt();

        int result = firstNumber + secondNumber ;
        System.out.println("Result is: "+result);
    }
}