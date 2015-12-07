#pragma once
#include <string>
#include <iostream>

class FunkyBigNumber
{
public:
	FunkyBigNumber(long long number);
	~FunkyBigNumber();
	std::string getValue();
	void setValue();
private:
	std::string value;
};