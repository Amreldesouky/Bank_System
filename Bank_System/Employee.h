#include <iostream>
#include <string>
#include "Person.h"
#pragma once

using namespace std;

class Employee : public Person {
private:
    double salary;
public:
    // constructor
    Employee(string name, int id, string password, double salary = 5000 ) : Person(name, id, password) {
        setSalary(salary);
    }
    // setters
    void setSalary(double salary);
    // getters
    double getSalary();

    // 
    void addEmployee(Employee& employee);

    //
    Employee* searchEmployee(int id);

    //
    void editEmployee(int id, string name, string password, double salary);

    //
    void listEmployee();

    // display employee info
    void display();

};