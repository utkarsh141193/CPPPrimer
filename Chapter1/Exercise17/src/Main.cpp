// Program to count negative numbers.
//

#include <iostream>

int main()
{
	std::cout<<"Enter series of numbers."<<std::endl;
	std::cout<<"Press any other key apart from numbers to see the count of negative numbers pressed and terminate the program."<<std::endl;
	int v1, count = 0;
	while(std::cin >> v1)
	{
		if(v1 < 0)
		{
			++count;
		}
	}
	std::cout<< "The negative numbers pressed are : "<< count <<std::endl;
	return 0;
}
