#include "Assignment.h"
#include <iostream>

using namespace std;

//Constructor
Assignment::Assignment()
{

}

//Gets name
string Assignment::getName()
{
	return name;
}

//Getter for category
string Assignment::getCategroy()
{
	return category;
}

//Getter for grade
double Assignment::getGrade()
{
	return grade;
}

//Setter for grade
void Assignment::setGrade()
{
	grade = 0.0;
}

//Bool for completed assignments
bool Assignment::isComplete()
{
	return complete;
}