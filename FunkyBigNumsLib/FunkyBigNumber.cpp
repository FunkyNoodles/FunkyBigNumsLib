#include "FunkyBigNumber.h"



FunkyBigNumber::FunkyBigNumber(long long number)
{
	value = std::to_string(number);
	std::cout << value << std::endl;
}

FunkyBigNumber::~FunkyBigNumber()
{
}

std::string FunkyBigNumber::getValue()
{
	return value;
}
