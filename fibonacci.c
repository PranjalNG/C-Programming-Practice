// WAP to print fibonacci number.
#include<stdio.h>

int main()
{
    int n, a = 1, b = 1, sum = 1;
    
    // Get input from user
    printf("Enter any positive number: ");
    scanf("%d", &n);
    
    // Input validation
    if (n <= 0) {
        printf("Error: Please enter a positive number!\n");
        return 1;
    }
    
    // Special cases for first two numbers
    if (n == 1 || n == 2) {
        printf("The %dth Fibonacci number is: 1\n", n);
        return 0;
    }
    
    // Calculate nth Fibonacci number
    for(int i = 1; i <= n-2; i++) {
        sum = a + b;
        a = b;
        b = sum;
    }
    
    printf("The %dth Fibonacci number is: %d\n", n, sum);
    return 0;
}