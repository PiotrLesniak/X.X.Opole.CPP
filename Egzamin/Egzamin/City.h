#pragma once
class City
{
	char *Name;
	int Arial;
public:
	City();
	City(char*, int);
	City(const City&);
	const City& operator = (const City&);
	void SetName(char*);
	char* GetName();
	void SetArial(int);
	int GetArial();
	void Print();
	void Input();
	~City();
};

