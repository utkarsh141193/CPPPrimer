// Program to find the sum within the specified range.
//

#include <iostream>

int main()
{
	std::cout<<"Enter two numbers : "<<std::endl;
	int v1, v2;
	std::cin>> v1 >> v2;
	int sum = 0;
	for(int i = v1; i <= v2; ++i )
	{
		sum += i;

	}
	std::cout << "The sum from "<< v1 << " to "<< v2 
		<< " inclusive is "<< sum << std::endl;

	//If the input v1=7 and v2=3 is supplied in this case
	//then the output will be 0
	//since the condition will always be false in the loop
	//i.e. 7<=3 will always be false
	//Hence the loop will never be executed.
	return 0;
}
