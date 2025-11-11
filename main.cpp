#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

public class Person {
    string name;
    int id;
    Person() {
        string name = "";
        int id = 0;
    }

    Person(string name, int id) {
        this->name = name;
        this->id = id;
    }
    getName() {
        return name;
    }
    setName(string name){
        this->name = name;
    }
    getID() {
        return id;
    }
    setID(int id) {
        this->id = id;
    }
    display() {
        cout << getName() << getID() << endl;
    }


};
class Student : public Person {
    int yearLevel;
    string major;
    Student() {
       int yearLevel = 0;
        string major = "";
    }
    Student(int yr, string mjr) {
        yearLevel = yr;
        major = mjr;
    }
    getYearLevel() {
        return yearLevel;
    }
    setYearLevel(int yearLevel) {
        this->yearLevel = yearLevel;
    }
    getMajor() {
        return major;
    }
    setMajor(string major) {
        this->major = major;
    }
    display() {
        cout << getYearLevel() << getMajor() << endl;
    }
};
class Instructor : public Person {
    string department;
    int experienceYears;
    getDepartment() {
        return department;
    }
    setDepartment(string dep) {
        this->department = dep;
    }
    getExperience() {
        return experienceYears;
    }
    setExperience(string exp) {
        experienceYears = exp;
    }
    Instructor() {
        department = "";
        experienceYears = 0;
    }
    Instructor(string department, int experienceYears) {
        this->department = department;
        this->experienceYears = experienceYears;
    }
    display() {
        cout << getDepartment() << getExperience() << endl;
    }
 };
class Course {
    string courseCode;
    string courseName;
    int maxStudents;
    Student* students;
    int currentStudents;
    addStudent(const Student& s) {

    }
    Course() {
        courseCode = "";
        courseName = "";
        maxStudents = 0;
        currentStudents = 0;
    }
    Course(string courseCode, string courseName, int maxStudents) {
        this->courseCode = courseCode;
        this->courseName = courseName;
        this->maxStudents = maxStudents;
    }
    getCourseCode() {
        return courseCode;
    }
    getCourseName() {
        return courseName;
    }
    getMaxStudents() {
        return maxStudents;
    }
    getCurrentStudents() {
        return currentStudents;
    }
    setCourseCode(string code) {
        this->courseCode = code;
    }
    setCourseName(string name) {
        this->courseName = name;
    }
    setMaxStudents(int max) {
        this->maxStudents = max;
    }
    setCurrentStudents(int cur) {
        this->currentStudents = cur;
    }
    displayCourseInfo() {
        cout << getCourseName() << getCourseCode() << getMaxStudents() << getCurrentStudents() << endl;
    }
};

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    Student s = new Student();
    Instructor i = new Instructor();
    Course c = new Course();
    Course::displayCourseInfo();
    Instructor::display();
    Student::display();







}
