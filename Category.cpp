#include "Category.h"
#include <iostream>
using namespace std;



Category::Category()
{

}

string Category::getName()
{
	return name;
}

double Category::getWt()
{
	return wt;
}

double Category::setWeight()
{
	wt = 0.0;
}
