#include <iostream>
#include "isprime.h"

int main()
{
	int number;

	while (std::cin >> number)
	{
		if (!isprime(number))
			std::cout << number << " is a prime: False\n" << std::endl;
		else
			std::cout << number << " is a prime: True\n" << std::endl;
	}

	return 0;
}
