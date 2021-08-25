package com.codeWithMe;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
	// write your code here
        Scanner sc = new Scanner(System.in);
        int myNumber = (int)(Math.random()*100);
        int userNumber = 0;

        do{
            System.out.println("Guss the number: ");
            userNumber = sc.nextInt();

            if(userNumber == myNumber){
                System.out.println("Woooo...Correct NUmber");
                break;
            }
            else if (userNumber > myNumber) {
                System.out.println("your number is large");
            }
            else {
                System.out.println("your number is small");
            }
        } while (userNumber >=0);

        System.out.print("My number was:  ");
        System.out.println(myNumber);
    }
}
