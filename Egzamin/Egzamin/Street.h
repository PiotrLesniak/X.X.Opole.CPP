#pragma once

#include "City.h"

class Street : public City
{
	char* Title;
public:
	Street();
	Street(char*, int, char*);
	Street(const Street&);
	const Street& operator = (const Street&);
	void SetTitle(char*);
	char* GetTitle();
	void Print();
	void Input();
	~Street();
};

