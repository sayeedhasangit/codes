package com.codeWithMe;

import java.util.Arrays;

public class Main {

    public static void main(String[] args) {
	// write your code here
        //System.out.println("Hello Java");
        //System.out.println("start learning Java programming language");

        // variable
        //String name = new String ("sayeed");
        //System.out.println(name);


        //int roll = 36;


        // Data Type
        //1. Primitive type
        //2. Non-Primitive type

        //byte num1=10, num2=20, sum;
        //System.out.println(num1+num2);


        //int[] marks = new int [3];
        //marks[0] = 98;
        //marks[1] = 50;
        //marks[2] = 45;



        // Arrays shorting
        //System.out.println("marks list length: " + marks.length);
        //System.out.println("Before Arrays short: " + marks[0]);
        //Arrays.sort (marks);
        //System.out.println("After arrays short: " + marks[0]);


        //Expection - Handling
        int[] marks = {95, 90, 80};
        try{
            System.out.println(marks[5]);
        }   catch (Exception exception){
            //do something catching
        }

        System.out.println("we handle exception - by using try, catch block");



    }
}
