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
	string category;
	string assignment;
public:
	Grades();
	void setCategory();
	void setAssignment();
	string getCategory();
	string getAssignment();
	void readFile();
	int getScores();
	double calculateFinal();
	void printCatSummary();
	void printTotalPoints();
};

#endif