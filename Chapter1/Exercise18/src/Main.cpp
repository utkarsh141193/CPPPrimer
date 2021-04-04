// Program to write the range of numbers to standard output.
//

#include <iostream>

int main()
{
	std::cout<< "Enter the starting point of the range."<<std::endl;
	int s;
	std::cin>>s;
	std::cout<< "Enter the ending point of the range."<<std::endl;
	int e;
	std::cin>>e;
	int lower, upper;
	if(s<=e)
	{
		lower = s;
		upper = e;
	}
	else
	{
		lower = e;
		upper = s;
	}
	for(int i = s; i <= e; ++i)
	{
		std::cout << i << std::endl;
	}
	return 0;
}
