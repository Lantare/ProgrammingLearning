//
//  main.c
//  CCorrection
//
//  Created by Mr. ST4N on 14/09/14.
//  Copyright (c) 2014 Mr. ST4N. All rights reserved.
//
//  Function prototypes will not be added in a different header file to make it easier,
//  but you should use headers in practice.

#include <stdio.h>
#include <stdlib.h>
#include <string.h> //easier for string processing
#include <time.h> //for random generation
#define numberOfElements(x)  (int)(sizeof(x) / sizeof(x[0])) //used to check how many elements are in an array for example


//Function prototypes
void TriForce();
char * Hello(char name[]);
int Addition(int a, int b);
int Subtraction(int a, int b);
int Multiplication(int a, int b);
int Division(int a, int b);
int rdm();
int rdmBounds(unsigned int min, unsigned int max);

int main()
{
    
    
    // Part One:
    
    
    // FIXME: Declare variables
    // Declare two variables: an integer named "age", and a string named "name" with corresponding values (your name and age)
    int age = 19;
    char name[] = "Stan";
    
    // FIXME: Print
    // Print the following sentence in the console "You are NAME and you are AGE years old !". Don't forget to add a newline at the end
    printf("You are %s and you are %d years old !\n", name, age);
    
    // FiXME: Concatenation
    // Create a new string variable called "hello" which value is "Hello ". Add "name" at the end of "hello" (Concatenation) then print it
    char hello[] = "Hello ";
    strcat(hello, name);
    printf("%s\n", hello);
    
    // FIXME: Array
    // create a new string array called "shoppingList", with three elements of your choice. Create an int variable containing the number of
    // elements in "shoppingList" (using a function of the array/using the array)
    char *shoppingList[3] = {"milk", "a Chevy Camaro", "a life"};
    const int nbOfElements = numberOfElements(shoppingList);
    
    // FIXME: For-loop - Integer
    // Create a simple for-loop for an integer "i" going from 1 to 10 that print the value of "i"
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",i);
    }
    printf("\n");
    // FIXME: For-loop - shoppingList
    // Create a for loop that iterate through "shoppingList" and prints each element with "You have to buy (elemt)".
    for (int j = 0; j <nbOfElements; j++)
        printf("You have to buy %s\n", shoppingList[j]);
    
    
    // FIXME: Foreach-loop
    // Do the same with a foreach-loop.
    // The C programming language doesn't have a foreach, but you can look for macros if you are
    // curious.
    
    
    
    // FIXME: If-statement
    // Modify the first for-loop (with i from 1 to 10) such that it prints "(value of i) is even" when "i" is divisible
    // by 2 (You may want to learn more about "modulo" (%)). Else, print "(value of i) is odd".
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
            printf("%d is even\n",i);
        else
            printf("%d is odd\n",i);
    }
    
    
    
    // FIXME: Sum Up
    // Create a string variable called "element" with the value of your choice. Then create a for-loop/foreach-loop that checks if "shoppingList"
    // contains "element". If yes, print "You have to buy (value of element) !", and stop the loop (search how to stop a loop).
    // If not, print "Nope, you don't need (value of "element")".
    char element[] = "a life";
    for (int k = 0; k < nbOfElements; k++)
    {
        if(strcmp(element, shoppingList[k]) == 0)
        {
            printf("You have to buy %s !\n", shoppingList[k]);
            break;
        }
        else
        {
            printf("Nope, you don't need %s !\n", shoppingList[k]);
        }
    }
    
    
    
    // Part Two:
    
    
    // FIXME: Functions - Ascii
    // Create a function that returns nothing and which doesn't takes any parameter. It should just be named "TriForce"
    // and print the TriForce symbol (one triangle over two other ones, can be found on internet) with "TRIFORCE"
    // Don't forget to call the function !
    TriForce(); //Calling the functions in main()
    
    
    // FIXME: Functions - One parameter
    // Create a function that takes a string as parameter and returns "Hello (value of string) !"
    // http://stackoverflow.com/questions/1745726/how-to-store-printf-into-a-variable
    printf("%s",Hello("Stan"));
    
    // FIXME: Functions - Multiple parameters
    // Create a function that takes two integers as parameters and returns the addition of these two.
    // You can do the same with multiplication, subtraction and division.
    printf("%d\n", Addition(5, 12));
    printf("%d\n", Subtraction(5, 12));
    printf("%d\n", Multiplication(5, 12));
    printf("%d\n", Division(5, 12)); // returns 0 because "a" and "b" are Integers
    printf("%d\n", Division(10, 2));
    
    
    // FIXME: User entry
    // Create a string variable that takes what the user enter in the console as value. Then print "You entered (value of string)"
    char userInput[100]; // 10 will be the max length of the input
    printf("Enter a word:");
    scanf("%s", userInput);
    printf("You entered %s\n", userInput);
    
    
    // FIXME: While loop
    // Create a while loop that takes a number and divides it by 2 until it is less than 3
    int number = 52;
    while (number > 3)
    {
        number /= 2; //or number = number / 2;
        printf("%d ", number);
    }
    printf("\n");
    
    
    
    // FIXME: do-While loop
    // Do the same with a do-while loop
    int number2 = 84;
    do
    {
        number2 = number2 / 2;
        printf("%d ", number2);
    } while (number2 > 3);
    printf("\n");
    // TODO: Switch
    //

    
    
    // FIXME: Random generator
    // Create a function that returns a random number
    srand((unsigned)time(NULL));
    printf("%d\n", rdm());
    
    
    // FIXME: Random generator with bounds
    // Create another function that returns a random number between two bounds given as parameters.
    printf("%d\n", rdmBounds(10,20));
    
    
    
    // FIXME: Multi-dimensionnal array
    // Create a two dimensionnal int array of 3 columns and 3 rows. Use 2 for-loops to add a random number
    // between 1 and 9 in each of the 9 rooms.
    // You may use one of the two previously created function.
    // Then print them such that they appear like this (with [x1,x9] being the 9 random integers):
    // {x1,x2,x3,}
    // {x4,x5,x6,}
    // {x7,x8,x9,}
    int multiArray[3][3];
    for (int l = 0; l < numberOfElements(multiArray); l++)
        for (int m = 0; m < numberOfElements(multiArray[l]); m++)
            multiArray[l][m] = rdmBounds(1, 9);
    
    for (int n = 0; n < numberOfElements(multiArray); n++)
    {
        printf("{");
        for (int o = 0; o < numberOfElements(multiArray[n]); o++)
        {
            printf("%d,", multiArray[n][o]);
        }
        printf("}\n");
    }
    
    
    // TODO: Switch
    //

    return 0;
}


void TriForce()
{
    printf("   /\\  \n");
    printf("  /__\\ \n");
    printf(" /\\  /\\  \n");
    printf("/__\\/__\\ \n");
    printf("TRIFORCE\n");
}

char * Hello(char name[])
{
    char *buf;
    size_t sz;
    sz = snprintf(NULL, 0, "Hello %s!\n", name);
    buf = (char *)malloc(sz + 1); /* make sure you check for != NULL in real code */
    snprintf(buf, sz+1, "Hello %s!\n", name);
    
    return  buf;
}

int Addition(int a, int b)
{
    return a + b;
}
int Subtraction(int a, int b)
{
    return a - b;
}
int Multiplication(int a, int b)
{
    return a * b;
}
int Division(int a, int b)
{
    return a / b;
}


int rdm()
{
    return rand();
}
int rdmBounds(unsigned int min, unsigned int max)
{
    return (rand()% max - min) + min;
    
}









