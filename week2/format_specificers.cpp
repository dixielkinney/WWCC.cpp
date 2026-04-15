//Coding Assignment 0: Format Specifier

#include <iostream>
#include <cstdio>   // For printf
using namespace std;

int main() {
    int integer_value = 42;
    float float_value = 3.14159265f;
    double double_value = 3.14159265;
    char char_value = 'X';
    const char* string_value = "Hello, World!";

    printf("Format Specifier Practice\n");
    printf("------------------------\n\n");

    printf("Integer Formats:\n");
    
    printf("Decimal:");
    printf("%d\n", 42);

    printf("Hexadecimal:");
    printf("%x\n", 42); //should this be printf("%p", &var) instead?

    printf("Octal:");
    printf("%o\n", 42);

    printf("With Precision (5):");
    printf("[%5d]\n", 42);

    printf("Left-aligned:");
    printf("[%-5d]\n\n", 42);


    printf("Float Formats:\n");

    printf("Default:");
    printf("%f\n", float_value);

    printf("With Precision (2):") ;
    printf("%.2f\n", double_value);

    printf("Scientific:");
    printf("%e\n",float_value);

    printf("Fixed with Precision (4):");
    printf("%.4f\n\n", double_value);


    printf("Character and String Formats:\n");

    printf("Character:");
    printf("%c\n", char_value);

    printf("String:");
    printf("%s\n", string_value);

    printf("String with Width (20):");
    printf("%20s\n", string_value);

    return 0;
}