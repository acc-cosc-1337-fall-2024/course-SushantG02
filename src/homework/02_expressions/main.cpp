//write include statements
#include "hwexpressions.h"
#include "iostream"


//write namespace using statement for cout
using std::cin; using std::cout;

int main()
{
	double meal_amount, tip_rate, tip_amount, tax_amount, total;
	
	cout<< "Enter meal amount: $";
	cin>> meal_amount;

	tax_amount = get_sales_tax_amount(meal_amount);
	cout<< "Sales Tax: "<< tax_amount<<"\n";

	cout<< "Enter tip rate(as a decimal): ";
	cin>> tip_rate;

	tip_amount = get_tip_amount(meal_amount, tip_rate);
	cout<< "Tip Amount: $"<< tip_amount<<"\n";

	total = meal_amount + tax_amount + tip_amount;

	cout<< "Total Amount: $"<<total<<"\n";

	return 0;
}
