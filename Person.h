#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;
public class Person {
private:
    string name;
    int id;
public:
    display();
    getName();
    setName(string name);
    getID();
    setID(int id);
    Person();
    Person(string name, int id);
    ~Person();

};

#endif
