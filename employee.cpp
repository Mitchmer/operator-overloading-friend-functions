#include "employee.h"

/*
***************************************
* Constructor Definitions             *
***************************************
*/

//---------------------------
// Default Constructor
//---------------------------
// Initializes each member
//   to a basic default value
//---------------------------

Date::Date() 
	: month{1}, day{1}, year{2000} {}
Date::Date(int m, int d, int y) 
	: month{m}, day{d}, year{y} {}

//-------------------------------
//  Print
//-------------------------------

void Date::displayDate() {
	cout << month << "/" << day << "/" << year << endl;
	return;
}

/*
***************************************
* Constructor Definitions             *
***************************************
*/

//---------------------------
// Default Constructor
//---------------------------
// Initializes each member
//   to a basic default value
//---------------------------

Employee::Employee()
	: name{"Default name"}, id{"00000-0"}, phone{"888-888-8888"}, age{20}, gender{"None"}, jobTitle{"Default Title"}, salary{0}, hireDate{Date()} {} 
Employee::Employee(string n, string i, string p, int a, string g, string jt, int s, Date d)
	: name{n}, id{i}, phone{p}, age{a}, gender{g}, jobTitle{jt}, salary{s}, hireDate{d} {}

/*
***************************************
* Member Function Definitions         *
***************************************
*/

//--------------------------
//  Mutators
//--------------------------

void Employee::changeName(string n) {name = n;}
void Employee::changeID(string i) {id = i;}
void Employee::changePhone(string p) {phone = p;}
void Employee::changeAge(int a) {age = a;}
void Employee::changeGender(string g) {gender = g;};
void Employee::changeJobTitle(string jt) {jobTitle = jt;}
void Employee::changeSalary(int s) {salary = s;}
void Employee::changeHireDate(Date d) {hireDate = d;}


void Employee::print() {
	cout << "Name: " << name << endl;
	cout << "ID: " << id << endl;
	cout << "Phone: " << phone << endl;
	cout << "Age: " << age << endl;
	cout << "Gender: " << gender << endl;	
	cout << "Job Title: " << jobTitle << endl;
	cout << "Salary: " << salary << endl;
	cout << "Hire Date: ";
	hireDate.displayDate();
	return;
}

bool Employee::operator==(const Employee& other) const {
	return (this->phone == other.phone);

}

//***************************************
// Friend Functions                    
//***************************************

bool operator==(const Employee& lhs, const Programmer& rhs){
	return lhs.phone == rhs.phone;
}

