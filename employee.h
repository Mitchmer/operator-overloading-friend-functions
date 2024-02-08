#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include "programmer.h"
using namespace std;

/*
-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
-=  Date Class                                            -=
-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
-=  Stores a month, day and year                          -=
-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= 
*/
class Date {
	public:
		/*
		***************************************
		* Constructors                        *
		***************************************
		*/
		Date();
		Date(int month, int day, int year);

		void displayDate();
	private:
		int month;
		int day;
		int year;
};

/*
-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
-=  Employee Class                                        -=
-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
-=  Holds information of an employee, such as name, age,  -=
-=    and other relevant information                      -=
-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
*/

class Employee {
    
	//***************************************
	// Friend Functions                    
	//***************************************
		
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
	friend bool operator==(const Employee& lhs, const Programmer& rhs);
	
	public:

		/*
		***************************************
		* Constructors                        *
		***************************************
		*/
		Employee();
		Employee(string name, string id, string phone, int age, string gender, string jobTitle, int salary, Date date);

		/*
		***************************************
		* Member Functions                    *
		***************************************
		*/

		//--------------------------
		//  Mutators
		//--------------------------

		void changeName(string name);
		void changeID(string id);
		void changePhone(string phone);
		void changeAge(int age);
		void changeGender(string gender);
		void changeJobTitle(string jobTitle);
		void changeSalary(int salary);
		void changeHireDate(Date date);

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

		/*
		---------------------------------------------------------
		- Equality == Operator (Member Function)                -
		---------------------------------------------------------
		- Overloads the equality operator == as a member        -
		- function. Returns true if the phone number for both   -
		- Employee objects are the same. Otherwise, returns     -
		- false.                                                -
		---------------------------------------------------------
		- Pre-Condition: Both the argument as well as the       -
		- 	invoking Employee objects must have valid and   -
		- 	populated phone data members                    -
		- Post-Condition: Returns true if the phone numbers of  -
		- 	both Employee objects are the same. Otherwise,  -
		- 	the function returns false.                     -
		---------------------------------------------------------
		*/
		bool operator==(const Employee& other) const;

	private:
		/*
		***************************************
		* Private Data Members                *
		***************************************
		*/
		string name;
		string id;
		string phone;
		int age;
		string gender;
		string jobTitle;
		int salary;
		Date hireDate;
};

#endif
