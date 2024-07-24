#ifndef CATEGORY_H
#define CATEGORY_H
#include <iostream>
using namespace std;


class Category
{
private:
	string name;
	double wt;
public:
	Category();
	string getName();
	double getWt();
	double setWeight();
};

#endif