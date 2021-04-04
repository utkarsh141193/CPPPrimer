// Print 10 numbers per line w/o using array.
//

#include <iostream>

int main()
{
	int countChar = 0;
	std::cout << "Enter the start point of the range: "<< std::endl;
	int s;
	std::cin >> s;
	std::cout << "Enter the end point of the range: "<< std::endl;
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
		if(countChar < 9)
		{
			std::cout << i;
			++countChar;
		}
		else
		{
			countChar = 0;
			std::cout<<i<<std::endl;
		}
	}
	return 0;
}
