#ifndef PROGRAMMER_H
#define PROGRAMMER_H

#include "employee.h"

class Programmer : public Employee {
	//#########################################
	//  Friend Functions
	//#########################################

	//-----------------------------------------------------
	// Equality == Operator Friend Function               -
	//-----------------------------------------------------
	// Compares the phone numbers of two Employee         -
	// objects together                                   -
	//-----------------------------------------------------
	// Pre-Condition: requires a valid Employee object as -
	// 	well as a valid Programmer object, both with  -
	//	populated phone number members.               -
	// Post-Condition:                                    -
	// 	returns true if both phone numbers are the    -
	//	same, otherwise the function returns false.   -
	//-----------------------------------------------------
	friend bool operator==(const Programmer& lhs, const Employee& rhs);

	public:
		//#########################################
		//  Member Functions
		//#########################################

		//-------------------------------------------------------
		//  Default Programmer Constructor                      -
		//-------------------------------------------------------
		// Initializes a Programmer object with default data    -
		// member values                                        -
		//-------------------------------------------------------
		// Pre-Condition: N/A                                   -
		// Post-Condition: A new Programmer object will be      -
		// 	initialized with the following values:          -
		//	Default Employee (Inherited):                   -
		//		Name: "Default name"                    -
		//		ID: "00000-0"                           -
		//		Phone: "888-888-8888"                   -
		//		Age: 20                                 -
		//		Gender: "None"                          -
		//		Job Title: "Default Title"              -
		//		Salary: 0                               -
		//		Hire Date: Default Date (1/1/2000)      -
		//	Department: 0                                   -
		//	Supervisor: "None"                              -
		//	Percent Salary Increase: 0.0                    -
		//	Knows CPP?: false                               -
		//	Knows Java?: false                              -
		//-------------------------------------------------------
		Programmer();

		//-------------------------------------------------------
		//  Alternate Programmer Constructor                    -
		//-------------------------------------------------------
		// Initializes a Programmer object where each data      -
		// member has been defined from its arguments           -
		//-------------------------------------------------------
		// Pre-Condition: Requires a valid corresponding data   -
		//	value for each argument                         -
		// Post-Condition: Using each value from the given      -
		// 	arguments, a new Programmer object is created,  -
		//	with all data members populated.                -
		//-------------------------------------------------------
		Programmer(string name, string id, string phone, int age, string gender, string jobTitle, int salary, Date date, int department, string supervisor, float percentSalaryIncrease, bool knowsCPP, bool knowsJava);

		//#########################################
		//  Member Functions
		//#########################################

		//==========================
		//  Mutators
		//==========================

		void changeDepartment(int);
		void changeSupervisor(string);
		void changePercentSalaryIncrease(float);
		void changeKnowsCPP(bool);
		void changeKnowsJava(bool);

		//==========================
		//  Helper Functions
		//==========================

		//-------------------------------------------------------
		//  Print                                               -
		//-------------------------------------------------------
		// Prints the values of each data member to the user    -
		//-------------------------------------------------------
		// Pre-Condition: each member must be populated with    -
		//	valid data                                      -
		// Post-Condition: each of the object's data members    -
		//	are printed to the user                         -
		//-------------------------------------------------------
		void print();

	private:
		//#########################################
		//  Private Data Members
		//#########################################
		int department;
		string supervisor;
		float percentSalaryIncrease;
		bool knowsCPP;
		bool knowsJava;
};

#endif
