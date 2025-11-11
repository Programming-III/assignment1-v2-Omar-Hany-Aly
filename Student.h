#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
#using namespace std;
class Student : public Person {
private:
    int yearLevel;
    string major;
public:
    Student();
    Student(int yr, string mjr);
    display();
    getYearLevel();
    setYearLevel(int yearlevel);
    getMajor();
    setMajor(string major);
    ~Student();

};




#endif
