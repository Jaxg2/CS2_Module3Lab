#include "Grades.h"
#include "Assignment.h"
#include <iostream>
#include <fstream>
using namespace std;

//Constructor
Grades::Grades()
{

}

//Setter for category
void Grades::setCategory()
{
	//category = 0;
}

//Setter for assignment
void Grades::setAssignment()
{
	//assignment = 0;
}

//Getter for category
string Grades::getCategory()
{
	cout << "Enter category: ";
	cin >> category;
	return category;
}

//Getter for assignment
string Grades::getAssignment()
{
	cout << "Enter assignment name: " << endl;
	cin >> assignment;
	return assignment;
}

//Reads from file
void Grades::readFile()
{
	ifstream inputFile("grades.txt");

	if (!inputFile.is_open())
	{
		cout << "Could not open the file." << endl;
	}
}

//Gets scores
int Grades::getScores()
{
	Assignment assignment;

	int num;
	cout << "How many scores will you be entering: " << endl;
	cin >> num;
	
	for (int i = 0; i < num; i++)
	{
		cout << "Please enter the score for assignment #" << i + 1 << ": " << endl;
		cin >> assignments[i];
	}

}

//Calculates final grade
double Grades::calculateFinal()
{

}

//Prints out category summary
void Grades::printCatSummary()
{

}

//Prints out total points
void Grades::printTotalPoints()
{

}