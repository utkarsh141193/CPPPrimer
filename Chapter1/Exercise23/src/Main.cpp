// Program to enter various transactions of same ISBN
// and print their sum
//

#include <iostream>
#include "Sales_item.h"

int main()
{
	std::cout << "Enter the transactions for same ISBN : "<<std::endl;
	Sales_item total, trans;
	if(std::cin >> total)
	{
		while(std::cin >> trans)
		{
			if(total.same_isbn(trans))
			{
				total = total + trans;
			}
			else
			{
				std::cout << total << std::endl;
			}
		}
		std::cout << total << std::endl;
	}
	else
	{
		std::cout << "No data ?!" << std::endl;
		return -1;
	}

	return 0;
}
