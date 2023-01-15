#include "header.h"
void edit()
{
    fstream objj;
    student stu, temp;
    objj.open("storage.dat", ios::binary | ios::in | ios::out);
    int roll, found;

    cout << "=========================================== EDIT STUDENT DATA ===========================================\n\n";
    cout << "enter student ROLLNO. <> ";
    cin >> roll;
    while (objj.read(reinterpret_cast<char *>(&temp), sizeof(student)))
    {
        if (temp.roll == roll)
        {
            stu.roll = roll;
            cout << "                                           record found";
            cout << "                                           NAME <> " << temp.name << endl;
            cout << "                                     FATHERNAME <> " << temp.fathername << endl;
            cout << "                                  DATE OF BIRTH <> " << temp.dob << endl;
            cin.ignore();
            cout << "                                    enter student NEW record \n\n";
            cout << "                             enter student NAME <> ";
            cin.getline(stu.name, 50);
            cout << "                       enter student FATHERNAME <> ";
            cin.getline(stu.fathername, 50);
            cout << "                    enter student DATE OF BIRTH <> ";
            cin.getline(stu.dob, 3);
            objj.seekp(objj.tellp() - sizeof(student));
            objj.write(reinterpret_cast<char *>(&stu), sizeof(student));
            objj.close();
            found = 1;
        } 
    }
    if (!found)
    {
        cout << "\n                                       no record found \n";
    }

    cout << "\n                                              edit successfull\n";
}