#include "Assignment.h"
#include <iostream>

using namespace std;


Assignment::Assignment()
{

}

string Assignment::getName()
{
	return name;
}

string Assignment::getCategroy()
{
	return category;
}

double Assignment::getGrade()
{
	return grade;
}

void Assignment::setGrade()
{
	grade = 0.0;
}

bool Assignment::isComplete()
{
	return complete;
}