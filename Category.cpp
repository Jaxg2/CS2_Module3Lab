#include "Category.h"
#include <iostream>
using namespace std;


//Constructr
Category::Category()
{

}

//Getter for name
string Category::getName()
{
	return name;
}

//Getter for weight on assignments
double Category::getWt()
{
	return wt;
}

//Sets weight
double Category::setWeight()
{
	wt = 0.0;
}
