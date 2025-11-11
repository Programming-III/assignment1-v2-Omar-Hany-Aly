#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;
class Instructor : public Person {
 private:
    string department;
    int experienceYears;
 public:
    display();
     getDepartment();
     setDepartment(string dep);
     getExperience();
     setExperience(string exp);
     Instructor();
     Instructor(string department, int experienceYears);
     ~Instructor();
};











#endif
