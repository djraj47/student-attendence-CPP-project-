#include "header.h"
void view()
{
    system("cls");

    cout << "=========================================== VIEW STUDENT DATA ===========================================\n";

    ifstream objj;
    objj.open("storage.dat", ios::binary);
    student stu;
    if (!objj)
    {
        cout << "unalbe to fetch data";
    }
    cout << left << setw(30) << "Roll NO." << setw(30) << "STUDENT NAME" << setw(30) << "FATHER'S NAME" << setw(30) << "DATE OF BIRTH" << endl;
    cout << "=========================================================================================================\n\n";
    while (objj.read(reinterpret_cast<char *>(&stu), sizeof(student)))
    {
        cout << left << setw(30) << stu.roll << setw(30) << stu.name << setw(30) << stu.fathername << setw(30) << stu.dob << endl;
    }
    cout << "\n=========================================================================================================\n\n";
    objj.close();
}
