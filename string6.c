//write a c program to make a function which will take a string as argument and return its length.
#include <stdio.h>
 
int main()
{
    char s[1000];  
    int i;
 
    printf("Enter any string: ");
    gets(s);
    for(i=0; s[i]!='\0'; i++);
    printf("Length of '%s' = %d",s,i);

    return 0;
}