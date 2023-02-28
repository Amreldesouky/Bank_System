#include <iostream>
#include<fstream>
#include "Employee.h"
#include "Client.h"
#pragma once

using namespace std;

class Admin : public Employee {
public:
    // constructor
    Admin(string name, int id, string password, double salary = 5000) : Employee(name, id, password, salary) {}
    //Methods
    // Methods
    void addClient(Client& client);
    Client* searchClient(int id);
    void listClient();
    void editClient(int id, string name, string password, double balance);
    void addEmployee(Employee& employee);
    Employee* searchEmployee(int id);
    void editEmployee(int id, string name, string password, double salary);
    void listEmployee();
    void display();
};
