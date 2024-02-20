//write include statement for decisions header
#include "decisions.h"
using std::string;

//Write code for function(s) code here

 std:: string get_letter_grade_using_if(int grade){
   std:: string result = "";

    if (grade >= 90 and grade <= 100)
    {
        result = "A";
    }
    
    else if (grade >= 80 and grade <= 89)
    {
        result = "B";
    }
   
    else if (grade >= 70 and grade <= 79)
    {
        result = "C";
    }

    else if (grade >= 60 and grade <= 69)
    {
        result = "D";
    }

    else 
    {
        result = "F";
    }
   return result;


}

std:: string get_letter_grade_using_switch(int grade)

{
    switch (grade / 10)
    {
        case 10:
        case 9:
            return "A";
            break;
        case 8:
            return "B";
            break;
        case 7:
            return "C";
            break;
        case 6:
            return "D";
            break;
        default:
            return "F";

    }

}