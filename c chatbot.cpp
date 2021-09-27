#include <stdio.h>  
#include<string.h>  
int main()  
{  
   char str1[20];  // declaration of char array  
   char str2[20];  // declaration of char array  
   int value; // declaration of integer variable  
   printf("How are you? : ");  
   scanf("%s",str1);  
   char str[20] = "fine";
   // comparing both the strings using strcmp() function  
   value=strcmp(str1,str);  
   if(value==0)  
   printf("Glad to hear that.");  
   else  
   printf("Sorry take care.");  
   return 0;  
}  
