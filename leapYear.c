//This is about calculating leap year
//8th March 2016
//Tony , Peng Yang

#include <stdio.h>
#include <stdlib.h>
int main (int argc, char const *argv[]){
   int inputyear ;
   printf ("please enter the the year you are interested in\n");
   scanf ("%d", &inputyear);
   if (inputyear>=1582){
      if (inputyear%400==0){
         printf("%d is a leap year!\n", inputyear);
      }
      else if (inputyear%4==0 && inputyear%100!=0){
         printf("%d is a leap year!\n", inputyear);
      }
      else{
         printf("%d is not a leap year!\n", inputyear);
      }
   }
   else{
      printf("%d is not a leap year!\n", inputyear);
   }
   return 0;
}
//Testing commit... testing.
