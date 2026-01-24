#include <stdio.h>
#include <stdlib.h>

int main()
{
// ***************************************************************************
// C, comments cannot start with # like in Python or shell scripts.

// Use // for single-line comments.

// Use /* ... */ for multi-line comments.

// **************************************************************************


// DECIMALS
// define the variable
float decimalNumber;
printf("Give me a decimal number: ");
scanf("%f", &decimalNumber);
printf("Hey there! Your number is %f\n", decimalNumber);


// Character (remember: character -> single character. For strings -> group of characters -> example: name)
char alphabet;
printf("Enter your favorite alphabet: ");
scanf(" %c", &alphabet);
printf("Your alphabet is %c", alphabet);


// INTEGERS
// define the variable
    int number;
    printf("\nEnter a number: ");
    scanf("%d", &number);
    printf("Hey there! Your number is %d", number);
}
