#ifndef EBRAHIM_ELNAGHY_FILESHELPER_H
#define EBRAHIM_ELNAGHY_FILESHELPER_H
class FilesHelper {
private:
    static vector<string> split(string line);
public:
    static void saveLast(string fileName, int id);
    static int getLast(string fileName);
    static void saveClient(Client clint);
    static void saveEmployee(string fileName, string lastIdFile, Employee employee);
    static void getClients();
    static void getEmployees();
    static void getAdmins();
    static void clearFile(string fileName, string lastIdFile);
};
#endif //EBRAHIM_ELNAGHY_FILESHELPER_H
