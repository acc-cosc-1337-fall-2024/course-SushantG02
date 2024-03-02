#include "func.h"
#include<iostream>
using std::cout; using std::cin;

int main() 
{
	int option;
	std::string dna;
	do 
	{
		cout<<"Menu"<<"\n";
		cout<<"1- Get GC Content"<<"\n";
		cout<<"2- Get Reversed"<<"\n";
		cout<<"3- Get DNA Complement"<<"\n";
		cout<<"4- Exit"<<"\n";
		cout<<"Choose one option: ";
		cin>>option;

		switch (option)
		{
			case 1: 
				cout<<"Enter DNA string: ";
				cin>>dna;
				cout<<"GC Content: "<<get_gc_content(dna)<<"\n";
				break;
			case 2: 
				cout<<"Enter DNA string: ";
				cin>>dna;
				cout<<"Reversed: "<<get_reverse_string(dna)<<"\n";
				break;
			case 3:
				cout<<"Enter DNA string: ";
				cin>>dna;
				cout<<"DNA Complement: "<<get_dna_complement(dna)<<"\n";
				break;
			case 4:
				cout<<"Exiting program "<<"\n";
				break;
			default: 
				cout<<"Invalid option, Please try agian."<<"\n";
			

		}
		
	} while (option != 4);

	return 0;
}
