import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        
    }
}

class Person{
	int age;
	
	Person(int initialAge){
		age = initialAge;
	}
	
	yearPasses(){
		age = age+1;
	}
	
	amIOld(){
		if(age<13)
			System.out.println("You are young.");
		else if()
			System.out.println("Younare a teenager.");
		else
			System.out.println("You are old.");
	}
}