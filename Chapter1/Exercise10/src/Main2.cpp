// Program to sum up numbers from 50 to 100 using while loop.
//

#include <iostream>

int main()
{
	int sum = 0, num = 50;
	while(num <= 100)
	{
		sum += num;
		++num;
	}
	std::cout<<" The sum from 50 to 100 is "<<sum<<std::endl;
	return 0;
}
