#include "stdafx.h"
#include "Street.h"

#include <iostream>

using namespace std;

Street::Street() : City()
{
	Title = new char('X');
}

Street::Street(char* name, int arial, char* title) : City(name, arial)
{
	this->Title = title;
}

Street::Street(const Street& street) : City(street)
{
	this->Title = street.Title;
}

const Street & Street::operator=(const Street& street)
{
	City::operator=(street);
	this->Title = new char(*street.Title);
	return *this;
}

void Street::SetTitle(char* title)
{
	this->Title = title;
}

char * Street::GetTitle()
{
	return this->Title;
}

void Street::Print()
{
	City::Print();
	cout << "Title: " << *Title << endl;
}

void Street::Input()
{
	City::Input();
	cout << "Podaj title: ";
	cin >> Title;
}


Street::~Street()
{
	delete Title;
}
