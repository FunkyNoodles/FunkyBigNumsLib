#include "FunkyBigNumber.h"



FunkyBigNumber::FunkyBigNumber(long long number)
{
	short digit;
	if (number > 0)
	{
		for (unsigned int i = 0; number > 0; i++)
		{
			digit = number % 10;
			value = std::to_string(digit) + value;
			number /= 10;
		}
	}
	else if (number < 0)
	{
		for (unsigned int i = 0; number < 0; i++)
		{
			digit = number % 10;
			value = std::to_string(digit) + value;
			number /= 10;
		}
		value = "-" + value;
	}
	else
	{
		value = "0";
	}
	std::cout << value << std::endl;
}

FunkyBigNumber::~FunkyBigNumber()
{
}

std::string FunkyBigNumber::getValue()
{
	return value;
}
