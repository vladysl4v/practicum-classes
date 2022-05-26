#pragma once
#include <iostream>
#include <string>
using namespace std;

class Children
{
private:
	string firstname;
	string surname;
	int age;
public:
	Children(string _firstname, string _surname, int _age)
	{
		firstname = _firstname;
		surname = _surname;
		age = _age;
	}

	void getData()
	{
		cout << "Name: " << firstname << " " << surname << " Age: " << age << " y.o. " << endl;
	}
};