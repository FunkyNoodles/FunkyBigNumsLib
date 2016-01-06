#include "FunkyBigNumber.h"



FunkyBigNumber::FunkyBigNumber()
{
	value = "";
}

FunkyBigNumber::FunkyBigNumber(long long number)
{
	setValue(number);
	std::cout << value << std::endl;
}

FunkyBigNumber::FunkyBigNumber(std::string numberInString)
{
	setValue(numberInString);
}
FunkyBigNumber::~FunkyBigNumber()
{
}

std::string FunkyBigNumber::getValue()
{
	return value;
}

void FunkyBigNumber::setValue(long long number)
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
}

void FunkyBigNumber::setValue(std::string numberInString)
{
	for (int i = 0; i < numberInString.length; i++)
	{
		if (numberInString[i] < 48 || numberInString[i] > 57)
		{
			std::cout << "Invalid Input" << std::endl;
			return;
		}
		else if (numberInString[i] == 45 && i != 0)
		{
			std::cout << "Invalid Input" << std::endl;
			return;
		}
	}
	value = numberInString;
}
