// Program for product of two numbers with each oprand on different lines.
//

#include<iostream>

int main()
{
	std::cout<<"Enter two  numbers: "<<std::endl;
	int num1, num2;
	std::cin>> num1 >> num2;
	std::cout << "The product of "<<std::endl;
	std::cout << num1 << std::endl;
	std::cout << " and "<< std::endl;
	std::cout << num2 << std::endl;
	std::cout << " is " << std::endl;
	std::cout << num1 * num2 << std::endl;
	return 0;
}
