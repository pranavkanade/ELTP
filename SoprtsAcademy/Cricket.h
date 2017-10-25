#pragma once
#include "Sports.h"

class Cricket : public Sports{
	string specialFields;
public:
	Cricket(string, string, string);
	string getSpecialField() const;
	void setSpecialField(string);

	void DisplayCricket();
};