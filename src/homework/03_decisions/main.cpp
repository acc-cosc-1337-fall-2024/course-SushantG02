//write include statements
#include "decisions.h"
#include <iostream>
int main() 
{
	int grade;
	std::cout<<"Enter your numerical from grade (0 to 100):  ";
	std::cin>> grade;
	
	if (grade < 0 or grade > 100) 
	{
		std::cout<<"Error: grade must be between 0 and 100."<<"\n";
	}
	else 
	{
	std::cout<<"using if: "<< get_letter_grade_using_if(grade)<<"\n";
	std::cout<<"using switch: "<< get_letter_grade_using_switch(grade)<<"\n";
	}
	return 0;
}