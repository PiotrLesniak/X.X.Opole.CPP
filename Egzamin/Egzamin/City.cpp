#include "stdafx.h"
#include "City.h"

#include <iostream>

using namespace std;

City::City()
{
	Arial = 0;
	Name = new char('X');
}

City::City(char* type, int number)
{
	this->Name = type;
	this->Arial = number;
}

City::City(const City& city) //konstruktor kopiujacy;
{
	this->Name = city.Name;
	this->Arial = city.Arial;
}

const City& City::operator=(const City & city)
{
	this->Name = new char(*city.Name);
	this->Arial = city.Arial;
	return *this;
}

void City::SetName(char* name)
{
	this->Name = name;
}

char * City::GetName()
{
	return this->Name;
}

void City::SetArial(int arial)
{
	this->Arial = arial;
}


int City::GetArial()
{
	return this->Arial;
}

void City::Print()
{
	cout << "Arial: " << Arial << endl;
	cout << "Name: " << *Name << endl;
}

void City::Input()
{
	cout << "Podaj Arial: ";
	cin >> Arial;
	cout << "Podaj Name: ";
	cin >> Name;
}

City::~City()
{
	delete Name;
}
