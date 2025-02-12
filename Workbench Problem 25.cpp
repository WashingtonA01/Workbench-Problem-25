/*
* Filename:Workbenchproblem25.cpp
* Programmer: Arianna Washington
* Date:12FEB2025
* Requirements: A retail store grants its customers a maximum amount of credit. Each customer's available credit
* is their mazimum amount of credut minus the amount of credit used. Write an algorithm and then a C ++ program that asks
* for a customer's maximum amount of credit, and amount of credit used. Display all information.

1. Declare our variables.
2. Get the variable information from the user. 
3. Calculate.
4. Display input and computed information.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double maxCredit; 
	double creditused;
	
	cout << "What is the maximum credit on your store card?" << endl;
	cin >>  maxCredit;
	cout << "How much credit have you used already?" << endl;
	cin >> creditused;

	double availableCredit = maxCredit - creditused;


	cout << fixed << setw(20)<< setprecision(2) << "Your max credit is $" <<setw(10) <<right << maxCredit;
	cout << fixed << setw(20) << setprecision(2) << "You have spent $" << creditused;
	cout << fixed << setw(20) << setprecision(2) << "You have $" << availableCredit << " remaining";

}

