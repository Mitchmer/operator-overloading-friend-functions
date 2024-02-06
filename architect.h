#ifndef ARCHITECT_H
#define ARCHITECT_H

#include "employee.h"

class Architect : public Employee {
    public:
    /*
    ***************************************
    * Constructors                        *
    ***************************************
    */
        Architect();
        Architect(string name, string id, string phone, int age, string gender, string jobTitle, int salary, Date date, int department, string supervisor, float percentSalaryIncrease, int yearsExperienceDesign);
    
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
        void changeYearsExperienceDesign(bool);

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
        int yearsExperienceDesign;
};

#endif
