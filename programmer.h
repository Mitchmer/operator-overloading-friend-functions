#ifndef PROGRAMMER_H
#define PROGRAMMER_H

#include "employee.h"

class Programmer : public Employee {
    public:
    /*
    ***************************************
    * Constructors                        *
    ***************************************
    */
        Programmer();
        Programmer(string name, string id, string phone, int age, string gender, string jobTitle, int salary, Date date, int department, string supervisor, float percentSalaryIncrease, bool knowsCPP, bool knowsJava);

    /*
    ***************************************
    * Member Functions                    *
    ***************************************
    */

    //--------------------------
    //  Mutators
    //--------------------------

        void changeDepartment(int);
        void changeSupervisor(string);
        void changePercentSalaryIncrease(float);
        void changeKnowsCPP(bool);
        void changeKnowsJava(bool);

        void print();

    private:
    /*
    ***************************************
    * Private Data Members                *
    ***************************************
    */
        int department;
        string supervisor;
        float percentSalaryIncrease;
        bool knowsCPP;
        bool knowsJava;
};

#endif
