// Program to print numbers from 10 to 0 using while loop.
//

#include <iostream>

int main()
{
	int startLimit = 10;
        while(startLimit >= 0)
        {
       		std::cout<< startLimit << std::endl;
		--startLimit;
        }	       
	return 0;
}
