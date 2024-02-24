//write include statements
#include"repetition.h"
#include<iostream>
//write using statements
using std::cout;
using std::cin;


int main() 
{
	int choice;

	do{
		cout<<"Math Menu:"<<"\n";
		cout<<"1- Factorial"<<"\n";
		cout<<"2- Greatest Common Divisor"<<"\n";
		cout<<"3- Quit"<<"\n";
		cout<<"Enter your choice: ";
		cin>> choice;
	
		switch (choice)
		{
			case 1: {
				int num;
				cout<<"Enter a number to calulate factorial: ";
				cin>>num;
				cout<<"Factorial of "<<num<<" is "<<factorial(num)<<"\n";
				break;
			}
			case 2: {
				int num1, num2;
				cout<<"Enter two numbers to find GCD: ";
				cin>> num1>>num2;
				cout<<"GCD of "<<num1<<" and "<<num2<<" is "<<gcd(num1,num2)<<"\n";
				break;
			}
			case 3: {
				char confirm ;
				cout<<"Are you sure you want to exit? (y/n:)";
				cin>> confirm;
				if (confirm == 'y')
					cout<<"Exiting the system. Thank you for trying!"<<"\n";
				break;
			}
			default: 
			cout<<"Invlaid choice. Try again."<<"\n";
		}	
	
	} while (choice != 3);
	return 0;

}
