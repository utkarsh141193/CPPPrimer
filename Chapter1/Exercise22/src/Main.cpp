// Program to calculate the sum of two Sales_item object
// having the same ISBN.
// ex: 0-201-70353-X 4 24.99 and 0-201-70353-X 2 24.99
//

#include <iostream>
#include "Sales_item.h"

int main()
{
	std::cout << "Enter two transactions of same ISBN to get their sum " << std::endl;
	Sales_item book1, book2;
	std::cin >> book1 >> book2;
	if(book1.same_isbn(book2))
	{
		std::cout << "The sum is : "<< book1 + book2
			<<std::endl;
	}
	else
	{
		std::cerr << "Different ISBNs found."<<std::endl;
	}
	
	return 0;
}
