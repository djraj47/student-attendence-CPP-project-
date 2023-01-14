#include "header.h"
#include "exist.cpp"
void add()
{
    system("cls");
    char ch;
    fstream of;

    of.open("storage.dat", ios::app | ios::binary);

    student check;
    bool status;
    do
    {
        system("cls");
        cout << "========================================== ADD NEW STUDENT DATA =========================================\n\n";

        cout << "                                 enter student ROLLNO.  <>  ";
        cin >> check.roll;
        status = isExist(check.roll);
        if (status == true)
        {
            cout << "\n                                           already exist\n";
        }
    } while (status);

    cin.ignore();
    cout << "                                    enter student NAME  <>  ";
    cin.getline(check.name, 50);
    cout << "                             enter student FATHERNAME.  <>  ";
    cin.getline(check.fathername, 50);
    cout << "                             enter student BLOODGROUP.  <>  ";
    cin.getline(check.bloodgroup, 3);

    of.write(reinterpret_cast<char *>(&check), sizeof(student));
    of.close();
    cout << "\n                                     student record addes successfully\n";
}