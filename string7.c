//write a c program to take a string form user and reverse print its words :
//input:hello world how are you
//output:you are how world hello
#include <stdio.h>
#include <string.h>
 
void printReverse(char str[])
{
    int length = strlen(str);
 
    int i;
    for (i = length - 1; i >= 0; i--) {
        if (str[i] == ' ') {
 
            str[i] = '\0';
 
            printf("%s ", &(str[i]) + 1);
        }
    }
 
    printf("%s", str);
}
 
int main()
{
    char str[] = "hello world how are you";
    printReverse(str);
    return 0;
}