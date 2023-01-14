#include "header.h"
void edit()
{
    fstream objj;
    student stu, temp;
    objj.open("storage.dat", ios::binary | ios::in | ios::out);
    int roll, found;
    cout << "======================================== EDIT STUDENT DATA ========================================\n\n";
    cout << setw(60) << "enter student ROLLNO. <> ";
    cin >> roll;
    while (objj.read(reinterpret_cast<char *>(&temp), sizeof(student)))
    {
        if (temp.roll == roll)
        {
            stu.roll = roll;
            cout << setw(80) << "record found";
            cout << "NAME <> " << temp.name << endl;
            cout << "FATHERNAME <> " << temp.fathername << endl;
            cout << "BLOODGROUP <> " << temp.bloodgroup << endl;
            cin.ignore();
            cout << setw(60) << "      enter student NAME <> ";
            cin.getline(stu.name, 50);
            cout << setw(60) << "enter student FATHERNAME <> ";
            cin.getline(stu.fathername, 50);
            cout << setw(60) << "enter student BLOODGROUP <> ";
            cin.getline(stu.bloodgroup, 3);
            objj.seekp(objj.tellp() - sizeof(student));
            objj.write(reinterpret_cast<char *>(&stu), sizeof(student));
            objj.close();
            found = 1;
        }
    }
    if (!found)
    {
        cout << setw(60) << "\nno record found \n";
    }

    cout << setw(60) << "\nedit successfull\n";
}