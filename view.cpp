#include "header.h"
void view()
{
    ifstream objj;
    objj.open("storage.dat", ios::binary);
    student stu;
    if (!objj)
    {
        cout << "unalbe to fetch data";
    }

    cout << left << setw(30) << "Roll NO." << setw(30) << "STUDENT NAME" << setw(30) << "FATHER'S NAME" << setw(30) << "BLOOD GROUP" << endl;
    while (objj.read(reinterpret_cast<char *>(&stu), sizeof(student)))
    {
        cout << left << setw(30) << stu.roll << setw(30) << stu.name << setw(30) << stu.fathername << setw(30) << stu.bloodgroup << endl;
    }
    objj.close();
}
