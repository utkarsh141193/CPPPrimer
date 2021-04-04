// Program to print larger of the two numbers.
//

#include <iostream>

int main()
{
	std::cout<<"Enter two numbers : "<<std::endl;
	int v1,v2;
	std::cin >> v1 >> v2;
	if(v1 > v2)
	{
		std::cout << "The larger of the two numbers is "<<v1
			<< std::endl;
	}
	else if(v2 > v1)
	{
		std::cout << "The larger of the two numbers is "<<v2
			<<std::endl;
	}
	else
	{
		std::cout << "The two numbers are equal. "<< std::endl;
	}

	return 0;
}
