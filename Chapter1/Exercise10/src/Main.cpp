// Program to sum the numbers from 50 to 100 using for loop.
//

#include <iostream>

int main()
{
	int sum = 0;
	for(int i = 50; i <= 100; ++i)
	{
		sum += i;
	}
	std::cout << "The sum from 50 to 100 is "<< sum <<std::endl;
	return 0;
}
