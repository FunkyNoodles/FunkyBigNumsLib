#pragma once
#include <string>
#include <iostream>

class FunkyBigNumber
{
public:
	FunkyBigNumber();
	FunkyBigNumber(long long number);
	FunkyBigNumber(std::string numberInString);
	~FunkyBigNumber();
	std::string getValue();
	void setValue(long long number);
	void setValue(std::string numberInString);
private:
	std::string value;
};