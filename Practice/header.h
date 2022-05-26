#pragma once
#include <iostream>
#include <string>
using namespace std;

class Tiles
{
public:
	string brand;
	int size_h;
	int size_w;
	int price;
	Tiles(string _brand, int _size_h, int _size_w, int _price)
	{
		brand = _brand;
		size_h = _size_h;
		size_w = _size_w;
		price = _price;
	}
	void getData() 
	{ 
		cout << "Brand: " << brand << " Size: " << size_h << "x" << size_w << " Price: " << price << "$" << endl; 
	}
};