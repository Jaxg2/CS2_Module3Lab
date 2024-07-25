#ifndef GRADES_H
#define GRADES_H
#include "Category.h"
#include "Assignment.h"
#include <iostream>

using namespace std;

const int CATEGORIES_M = 100;
const int ASSIGNMENTS_M = 100;

class Grades
{
private: 
	Category categories[CATEGORIES_M];
	Assignment assignments[ASSIGNMENTS_M];
	int category;
	int assignment;
public:
	Grades();
	void setCategory();
	void setAssignment();
	int getCategory();
	int getAssignment();
	void readFile();
	double calculateFinal();
	void printCatSummary();
	void printTotalPoints();
};

#endif