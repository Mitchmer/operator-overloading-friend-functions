#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>

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
	//-------------------------------------------------------
	//  Ostream << Overload Friend Function                 -
	//-------------------------------------------------------
	// OVerloads the << ostream operator as a friend        -
	// function to print a given Employee object's name and -
	// job title to the user.                               -
	//-------------------------------------------------------
	// Pre-Condition: must have a valid employee object with-
	//	name and job title data members initialized as  -
	//	the given argument                              -
	// Post-Condition: the name and job title of the given  -
	// 	Employee object are inserted into the output    -
	//	output stream, and displayed to the user.       -
	//-------------------------------------------------------
	friend ostream& operator<<(ostream& lhs, const Employee& rhs);

	//-------------------------------------------------------
	//  Istream >> Overload Friend Function                 -
	//-------------------------------------------------------
	// Overloads the >> ostream operator as a friend        -
	// function to modify an Employee object's salary       -
	//-------------------------------------------------------
	// Pre-Condition: must have a valid employee object with-
	//	an initialized salary data member. The given    -
	//	input for the salary must be a valid integer.   -
	// Post-Condition: The salary data member of the given  -
	// 	Employee object are modified to be a new integer-
	//	value from the user's input                     -
	//-------------------------------------------------------
	friend istream& operator>>(istream& lhs,Employee& rhs);

	public:

		/*
		***************************************
		* Constructors                        *
		***************************************
		*/

		//-------------------------------------------------------
		//  Default Constructor                                 -
		//-------------------------------------------------------
		// Initializes an Employee object with default data     -
		// member values                                        -
		//-------------------------------------------------------
		// Pre-Condition: N/A                                   -
		// Post-Condition: A new Employee object will be        -
		// 	initialized with the following values:          -
		//	Name: "Default name"                            -
		//	ID: "00000-0"                                   -
		//	Phone: "888-888-8888"                           -
		//	Age: 20                                         -
		//	Gender: "None"                                  -
		//	Job Title: "Default Title"                      -
		//	Salary: 0                                       -
		//	Hire Date: Default Date object (1/1/2000)       -
		//-------------------------------------------------------
		Employee();

		//-------------------------------------------------------
		//  Alternate Constructor                               -
		//-------------------------------------------------------
		// Initializes an Employee object where each data member-
		// has been defined from its arguments                  -
		//-------------------------------------------------------
		// Pre-Condition: Requires a valid corresponding data   -
		//	value for each argument                         -
		// Post-Condition: Using each value from the given      -
		// 	arguments, a new Employee object is created,    -
		//	with all data members populated.                -
		//-------------------------------------------------------
		Employee(string name, string id, string phone, int age, string gender, string jobTitle, int salary, Date date);

		/*
		***************************************
		* Member Functions                    *
		***************************************
		*/

		//--------------------------
		// Accessors
		//--------------------------

		string getPhone() const;
		int getSalary() const;

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
		// Add Age                                              -
		//-------------------------------------------------------
		// Adds the given age (in years) to the age data        -
		// member of the Employee object, and outputs the       -
		// amount added to the screen                           -
		//-------------------------------------------------------
		// Pre-Condition: years must be a valid integer         -
		// Post-Condition: The given integer for years will be  -
		//	added to the object's age data member, as well  -
		// 	as displaying the amount to the user.           -
		//-------------------------------------------------------
		void addAge (int years);

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

		/*
		---------------------------------------------------------
		- Addition + Operator Overload (Member Function)        -
		---------------------------------------------------------
		- Overloads the addition + operator as a member         -
		- function. Adds an integer years to an employee's age, -
		- and prints to the user the amount added               -
		---------------------------------------------------------
		- Pre-Condition: invoking Employee object must have a   -
		-	valid integer initialized for its age data      -
		- 	member. The years integer must be a valid       -
		-	integer constant.                               -
		- Post-Condition: the amount of years will be added to  -
		-	the Employee object's age data member. The      -
		-	amount added will be printed on screen to the   -
		-	user.                                           -
		---------------------------------------------------------
		*/
		void operator+(int years);

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
