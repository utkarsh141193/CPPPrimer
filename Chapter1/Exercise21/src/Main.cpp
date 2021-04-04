// Program to read set of transactions 
// and write to the standard output using "Sales_item.h".
//

#include <iostream>
#include "Sales_item.h"

int main()
{
	std::cout << "Enter the transactions of today: "<<std::endl;
	std::cout << "Invalid transaction will result in termination"
		<< " of the entering screen and will display the "
		<< " transactions entered " << std::endl;
	Sales_item book;
	while(std::cin >> book)
	{
		std::cout << book << std::endl;
	}
	
	return 0;
}
