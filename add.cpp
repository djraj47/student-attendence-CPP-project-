#include "header.h"
#include "exist.cpp"
void add()
{
    system("cls");
    char ch;
    fstream of;
    cout << "======================================== ADD NEW STUDENT DATA ========================================\n\n";
    of.open("storage.dat", ios::app | ios::binary);

    student check;
    bool status;
    do
    {
        cout << "           enter student ROLLNO.  <>  ";
        cin >> check.roll;
        status = isExist(check.roll);
        if (status == true)
        {
            cout << "already exist";
        }
    } while (status);

    cin.ignore();
    cout << "                  enter student NAME  <>  ";
    cin.getline(check.name, 50);
    cout << "           enter student FATHERNAME.  <>  ";
    cin.getline(check.fathername, 50);
    cout << "           enter student BLOODGROUP.  <>  ";
    cin.getline(check.bloodgroup, 3);

    of.write(reinterpret_cast<char *>(&check), sizeof(student));
    of.close();
}