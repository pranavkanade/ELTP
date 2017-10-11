#pragma once

class Date
{
	int day, month, year;

public:
	Date();
	Date(int, int, int);

	int get_day()const;
	int get_month()const;
	int get_year()const;

	void set_day(int);
	void set_month(int);
	void set_year(int);
};