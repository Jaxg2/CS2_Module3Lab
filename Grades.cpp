#include "Grades.h"
#include <iostream>
#include <fstream>
using namespace std;

Grades::Grades()
{

}

void Grades::setCategory()
{
	category = 0;
}

void Grades::setAssignment()
{
	assignment = 0;
}

string Grades::getCategory()
{
	cout << "Enter category: ";
	cin >> category;
	return category;
}

int Grades::getAssignment()
{
	return assignment;
}

void Grades::readFile()
{
	ifstream inputFile("grades.txt");

	if (!inputFile.is_open())
	{
		cout << "Could not open the file." << endl;
	}
}

double Grades::calculateFinal()
{

}

void Grades::printCatSummary()
{

}

void Grades::printTotalPoints()
{

}