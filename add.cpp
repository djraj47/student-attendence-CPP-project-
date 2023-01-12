#include "header.h"
#include "exist.cpp"
void add()
{
    system("cls");
    char ch;
    fstream of;
    cout << "============================================ enter student data ====================================================\n\n";
    of.open("storage.dat", ios::app | ios::binary);

    student check;
    bool status;
    do
    {
        cout << "                                         ROLLNO.  <>  ";
        cin >> check.roll;
        status = isExist(check.roll);
        if (status == true)
        {
            cout << "\n                                     already exist\n";
        }
    } while (status);
    cin.ignore();
    cout << "                                           NAME  <>  ";
    cin.getline(check.name, 50);
    cout << "                                    FATHERNAME.  <>  ";
    cin.getline(check.fathername, 50);
    cout << "                                    BLOODGROUP.  <>  ";
    cin >> check.bloodgroup;

    of.write(reinterpret_cast<char *>(&check), sizeof(student));

    of.close();
    cout << "\n\n                               Student record added successfully\n";
}