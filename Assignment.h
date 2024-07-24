#ifndef ASSIGNMENT_H
#define ASSIGNMENT_H
#include <iostream>
using namespace std;

class Assignment
{
private:
	string name;
	string category;
	double grade;
	bool complete;

public:
	Assignment();
	string getName();
	string getCategroy();
	double getGrade();
	void setGrade();
	bool isComplete();
};

#endif