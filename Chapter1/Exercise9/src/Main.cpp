//Program for determining the sum using for loop.

#include <iostream>

int main()
{
	int sum = 0;
	for(int i = -100; i <= 100; ++i)
	{
		sum += i;
	}
	std::cout<< " The sum predicted is : 0"<<std::endl;
	std::cout<< " The sum obtained is : "<<sum<<std::endl;
	return 0;
}
