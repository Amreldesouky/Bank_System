#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "Person.h"
#include "Client.h"
#include "Employee.h"
#include "Admin.h"
using namespace std;

//class Parser {
//public:
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
        client.setId(stoi(fields[0])) ;
        client.setName(fields[1]);// = fields[1];
        client.setPassword(fields[2]);
        client.setBalance(stod(fields[3]));
        return client;
    }

    static Employee parseToEmployee(string line)
    {
        vector<string> fields = split(line);
        Employee employee;
        employee.setId(stoi(fields[0]));
        employee.setName(fields[1]);
        employee.setPassword(fields[2]);
        employee.setSalary(stod(fields[3]));
        return employee;
    }

    static Admin parseToAdmin(string line)
    {
        vector<string> fields = split(line);
        Admin admin;
        admin.setId(stoi(fields[0]));
        admin.setName(fields[1]);
        admin.setPassword(fields[2]);
        return admin;
    }
//};

// Test
int main()
{
    string line = "9,Ibrahim,123123Ii,2600";
    Client client = parseToClient(line);
    cout << "Client : id=" << client.getId() << ", name=" << client.getName() << ", balance=" << client.getBalance() << endl;
}
