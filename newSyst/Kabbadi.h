#pragma once
#include "Sports.h"
#include <string>

class Kabbadi : public Sports{
	string specialFields;
public:
	Kabbadi() = default;
	Kabbadi(string, string, string);
	string getSpecialField() const;
	void setSpecialField(string);

	void DisplayKabbadi();
};