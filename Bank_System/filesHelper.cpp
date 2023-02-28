#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include "parserClass.h"
#include "filesHelper.h"
using namespace std;



    static vector<string> split(string line);
    // Save the last ID to a file
    static void saveLast(string fileName, int id) {
        ofstream file(fileName);
        file << id << endl;
        file.close();
    }

    // Get the last ID from file
    static int getLast(string fileName) {
        int id = 0;
        ifstream file(fileName);
        if (file.is_open()) {
            string line;
            getline(file, line);
            id = stoi(line);
            file.close();
        }
        return id;
    }

    // Save a Client to file
    static void saveClient(Client client) {
        ofstream file("clients.txt", ios::app);
        if (file.is_open()) {
            file << client.getId() << "," << client.getName() << endl;
            file.close();
        }
    }

    // Save an Employee to file
    static void saveEmployee(string fileName, string lastIdFile, Employee employee)
    {
        int id = getLast(lastIdFile) + 1;
        ofstream file(fileName, ios::app);
        if (file.is_open()) {
            file << employee.getId() << "," << employee.getName() << "," << employee.getSalary() << endl;
            file.close();
        }
        saveLast(lastIdFile, id);
    }

    // Get all clients from file
    static void getClients() {
        ifstream file("clients.txt");
        if (file.is_open()) {
            string line;
            while (getline(file, line)) {
                vector<string> data = split(line);
                cout << "ID: " << data[0] << ", Name: " << data[1] << endl;
            }
            file.close();
        }
    }

    // Get all employees from file
    static void getEmployees() {
        ifstream file("employees.txt");
        if (file.is_open()) {
            string line;
            while (getline(file, line)) {
                vector<string> data = split(line);
                cout << "ID: " << data[0] << ", Name: " << data[1] << ", Salary: " << data[3] << endl;
            }
            file.close();
        }
    }

// Get all admins from file
    static void getAdmins() {
        ifstream file("admins.txt");
        if (file.is_open()) {
            string line;
            while (getline(file, line)) {
                vector<string> data = split(line);
                cout << "ID: " << data[0] << ", Name: " << data[1] << endl;
            }
            file.close();
        }
    }

    // Clear a file and reset the last ID
    static void clearFile(string fileName, string lastIdFile) {
        ofstream file(fileName);
        if (file.is_open()) {
            file << "";
            file.close();
        }
        saveLast(lastIdFile, 0);
    }