#include <iostream>
#include <string>
#include <vector>
#include <fstream>
//#include "Person.h"
//#include "Client.h"
//#include "Employee.h"
//#include "Admin.h"
//#include "Validation.h"
using namespace std;

class Client
        {
public:
    int id;
    string name;
    string password;
    double balance;
};

class Employee
        {
public:
    int id;
    string name;
    string password;
    double salary;
};

class Admin
        {
public:
    int id;
    string name;
    string password;
};

class Parser
        {
// protected:
//    int id;
//    string name;
//    string password;
//    double balance;
//    double salary;

public:
    static vector<string> split(string line)
    {
        vector<string> result;
        size_t start = 0;
        size_t end = 0;
        while ((end = line.find(',', start)) != string::npos)
        {
            result.push_back(line.substr(start, end - start));
            start = end + 1;
        }
        result.push_back(line.substr(start));
        return result;
    }

    static Client parseToClient(string line)
    {
        vector<string> fields = split(line);
        Client client;
        client.id = stoi(fields[0]);
        client.name = fields[1];
        client.password = fields[2];
        client.balance = stod(fields[3]);
        return client;
    }


    static Employee parseToEmployee(string line)
    {
        vector<string> fields = split(line);
        static Employee employee;
        employee.id = stoi(fields[0]);
        employee.name = fields[1];
        employee.password = fields[2];
        employee.salary = stod(fields[3]);
        return employee;
    }

    static Admin parseToAdmin(string line)
    {
        vector<string> fields = split(line);
        Admin admin;
        admin.id = stoi(fields[0]);
        admin.name = fields[1];
        admin.password = fields[2];
        return admin;
    }
};

// Test
int main()
{
    string line = "9,Ibrahim,123123Ii,2600";
    Client client = Parser::parseToClient(line);
    cout << "Client : id=" << client.id << ", name=" << client.name << ", balance=" << client.balance << endl;
}