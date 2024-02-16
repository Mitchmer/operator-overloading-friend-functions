#include "employee.h"

/*
-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
-=  Date Class                                            -=
-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
*/
//#########################################
//  Constructors
//#########################################

Date::Date() 
	: month{1}, day{1}, year{2000} {}
Date::Date(int m, int d, int y) 
	: month{m}, day{d}, year{y} {}

//#########################################
//  Member Functions
//#########################################

void Date::displayDate() const {
	cout << month << "/" << day << "/" << year << endl;
	return;
}

/*
-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
-=  Employee Class                                        -=
-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
*/
//#########################################
//  Constructors
//#########################################

Employee::Employee()
	: name{"Default name"}, id{"00000-0"}, phone{"888-888-8888"}, age{20}, gender{"None"}, jobTitle{"Default Title"}, salary{0}, hireDate{Date()} {} 
Employee::Employee(string n, string i, string p, int a, string g, string jt, int s, Date d)
	: name{n}, id{i}, phone{p}, age{a}, gender{g}, jobTitle{jt}, salary{s}, hireDate{d} {}

//#########################################
//  Member Functions
//#########################################

//--------------------------
// Accessors
//--------------------------

string Employee::getPhone() const{
	return phone;
}

int Employee::getSalary() const{
	return salary;
}
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

void Employee::addAge (int years) {
	this->age += years;
	cout << this->name << "'s age increased by " << years << " years." << endl;
}

//--------------------------
//  Helper Functions
//--------------------------

void Employee::print() const {
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

//--------------------------
//  Operator Overloading
//--------------------------

void Employee::operator+(int years) {
	this->age += years;
	cout << this->name << "'s age increased by " << years << " years." << endl;
}

bool Employee::operator==(const Employee& other) const {
	return (this->phone == other.phone);
}

//#########################################
//  Friend Functions
//#########################################

ostream& operator<<(ostream& lhs, const Employee& rhs) {
	lhs << "Employee: " << rhs.name << ", " << rhs.jobTitle << endl;
	return lhs;
}

istream& operator>>(istream& lhs, Employee& rhs) {
	int salaryNum {};
	lhs >> salaryNum;
	rhs.salary = salaryNum;
	return lhs;
}


