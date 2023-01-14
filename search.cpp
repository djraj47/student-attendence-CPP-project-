#include "header.h"
void search()
{
    system("cls");
    fstream objj;
    student temp;
    objj.open("storage.dat", ios::binary | ios::in | ios::out);
    int roll, found;
    cout << "======================================== SEARCH STUDENT DATA ========================================\n\n";
    cout << setw(60) << "enter student ROLLNO.  <> ";
    cin >> roll;
    while (objj.read(reinterpret_cast<char *>(&temp), sizeof(student)))
    {
        if (temp.roll == roll)
        {
            cout << "                                          record found\n\n";

            cout << "                                  ROLLNO. <> " << temp.roll << endl;
            cout << "                                     NAME <> " << temp.name << endl;
            cout << "                               FATHERNAME <> " << temp.fathername << endl;
            cout << "                               BLOODGROUP <> " << temp.bloodgroup << endl;
        }
    }
    objj.close();
}