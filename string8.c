//write a c program to check given string is pangram or not.
//the quick brown fox jumps over the lazy dog.
#include<stdio.h>
int main()
{
    char str[50];
    int i;
    int count[26]={0};              
    printf("enter the sentence");
    gets(str);
 
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==32)
            continue;               
        if(str[i]>96)               
            count[str[i]-97] +=1;      
       else                            
            count[str[i]-65] +=1;
    }
    for(i=0;i<26;i++)
    {
        
        if(count[i]==0)
          {
             printf("Not Panagram");
             exit(-1);
          }
    }
        printf("Panagram");
}