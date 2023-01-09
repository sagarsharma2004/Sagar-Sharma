//write a c program to take a string form user and count total number of alphabets,digits,spaces,and special characters in it.
#include <stdio.h>
#include <string.h>
 
int main()
{
    char s[1000]; 
    int i,alphabets=0,digits=0,specialcharacters=0,space=0;
 
    printf("Enter  the string : ");
    gets(s);
     
    for(i=0;s[i];i++)  
    {
        if((s[i]>=65 && s[i]<=90)|| (s[i]>=97 && s[i]<=122) )
          alphabets++;
        else if(s[i]>=48 && s[i]<=57)
         digits++;
        else if(s[i]==' ')
         space++;
        else
         specialcharacters++;

 	}
    printf("Alphabets = %d\n",alphabets);
    printf("Digits = %d\n",digits);
    printf("Special characters = %d\n", specialcharacters);
    printf("space = %d",space);
    return 0;
}