//This program is designed to complete the Activities on openlearning :) Jk
//This program is designed to calc if an input year is a leap year or not.
//  date : 9/03/2016
//  Tony Bao , Peng Yang
// Test cases . :
/* Input 			Output
	1994			1994 is not a leap year!
	1588			1588 is a leap year!
	1939			1939 is not a leap year!
	2000			2000 is a leap year!
	2018			2018 is not a leap year!
	2016			2016 is a leap year!

	*/

#include <stdio.h>		//Directing library
#include <stdlib.h>
#include <assert.h>	

#define StartofGreCale 1582			//leap year only exist after
									//the creation of Gregorian calender
#define TRUE 1						//in the year 1582
#define FALSE 0

void isLeapYear(int year);			// A sub function of main is declared
									//This sub is designed to determine if
									//the input year is a leap year or not. 

int main(int argc, char const *argv[])
{
	int inputYear;
	printf("Enter a year for calc:\n");	
	scanf("%d", &inputYear);			//The input year will be stored 
										//under the variable name "inputYear"
	
	assert(inputYear > 1582);			//When input is less than the creation of Geogorian calender
										//this prevent further confusion
	isLeapYear(inputYear);				//Callin sub function - insert input
	return 0;
}

void isLeapYear(int year){
	if ((year%4 == 0 && year%100 != 0)||year%400 == 0)
	{									//A year is a leap year if, it is divisiable by 400
										//Or divisiable by 4 but not 100 . 
		printf("%d is a leap year!\n", year);
	}else{
		printf("%d is not a leap year!\n", year);
	}									//Printf, display the output. 
}		