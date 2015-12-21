#pragma once
#include <string>
#include <vector>
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