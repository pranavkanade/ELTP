#pragma once
#include "Sports.h"

class Cricket : public Sports{
	string specialFields;
public:
	Cricket() = default;
	Cricket(string, string, string);
	Cricket(Cricket * c);
	string getSpecialField() const;
	void setSpecialField(string);

	void DisplayCricket();
};