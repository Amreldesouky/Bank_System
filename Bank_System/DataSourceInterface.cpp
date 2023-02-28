#include <vector>
#include <string>
#include <fstream>
#include "Employee.h"
#include "Admin.h"
#include "Client.h"
#include "DataSourceInterface.h"
#include <string>
using namespace std;



//FileManager class to implements the DataSourceInterface
class FileManager : public DataSourceInterface
{
public:
    void addClient(Client client) {
        ofstream outfile("clients.txt", ios::app);
        client.display();
        outfile.close();
    }

    void  addEmployee(Employee employee)
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
            cout << line << endl;
        }
        infile.close();
        return clients;
    }

    vector<Employee> getAllEmployees() {
        vector<Employee> employees;
        ifstream infile("employees.txt");
        string line;
        while (getline(infile, line)) {
            cout << line << endl;
        }
        infile.close();
        return employees;
    }

    vector<Admin> getAllAdmins() {
        vector<Admin> admins;
        ifstream infile("admins.txt");
        string line;
        while (getline(infile, line)) {
            cout << line << endl;
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

