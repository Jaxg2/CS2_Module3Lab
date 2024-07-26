//Jaxon

#include <iostream>
#include "Grades.h"
#include "Category.h"
#include "Assignment.h"
using namespace std;

int main()
{
	int i = 0;
	int j = 0;

	Grades grades;

	grades.getCategory();
	cout << "How many assignments for this category?: " << endl;
	cin >> j;

	for (i = 0; i < j; i++)
	{
		grades.getAssignment();
	}

	grades.getScores();

	grades.calculateFinal();
	grades.printCatSummary();
	grades.printTotalPoints();



}