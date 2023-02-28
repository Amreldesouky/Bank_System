#include <vector>
#include <string>
#include <fstream>
#include "Employee.cpp"
#include "Admin.h"
#include "Client.h"
#include <string>
using namespace std;

// DataSourceInterface abstract class
class DataSourceInterface {
public:
    virtual void addClient(Client client) = 0;
    virtual void addEmployee(Employee employee) = 0;
    virtual void addAdmin(Admin admin) = 0;
    virtual vector<Client> getAllClients() = 0;
    virtual vector<Employee> getAllEmployees() = 0;
    virtual vector<Admin> getAllAdmins() = 0;
    virtual void removeAllClients() = 0;
    virtual void removeAllEmployees() = 0;
    virtual void removeAllAdmins() = 0;
};

//FileManager class to implements the DataSourceInterface
class FileManager : public DataSourceInterface
{
public:
    void addClient(Client client) {
        ofstream outfile("clients.txt", ios::app);
        client.display();
        outfile.close();
    }

    void addEmployee(Employee employee)
    {
        ofstream outfile("employees.txt", ios::app);
        employee.display();
        outfile.close();
    }

    void addAdmin(Admin admin) {
        ofstream outfile("admins.txt", ios::app);
        admin.display();
        outfile.close();
    }

    vector<Client> getAllClients() {
        vector<Client> clients;
        ifstream infile("clients.txt");
        string line;
        while (getline(infile, line)) {
            clients.push_back(Client(line));
        }
        infile.close();
        return clients;
    }

    vector<Employee> getAllEmployees() {
        vector<Employee> employees;
        ifstream infile("employees.txt");
        string line;
        while (getline(infile, line)) {
            employees.push_back(Employee(line));
        }
        infile.close();
        return employees;
    }

    vector<Admin> getAllAdmins() {
        vector<Admin> admins;
        ifstream infile("admins.txt");
        string line;
        while (getline(infile, line)) {
            admins.push_back(Admin(line));
        }
        infile.close();
        return admins;
    }

    void removeAllClients() {
        ofstream outfile("clients.txt");
        outfile.close();
    }

    void removeAllEmployees() {
        ofstream outfile("employees.txt");
        outfile.close();
    }

    void removeAllAdmins() {
        ofstream outfile("admins.txt");
        outfile.close();
    }
};

