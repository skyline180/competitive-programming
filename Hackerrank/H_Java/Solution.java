package java_stdin_stdout_ii;

import java.util.Scanner;

public class Solution {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int integerInput = scanner.nextInt();
        double doubleInput = scanner.nextDouble();
        scanner.nextLine(); // Consume the remaining newline character

        String stringInput = scanner.nextLine();

        System.out.println("String: " + stringInput);
        System.out.println("Double: " + doubleInput);
        System.out.println("Int: " + integerInput);

        scanner.close();
    }
}

