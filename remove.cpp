#include "header.h"
void remove()
{
    student temp;
    ifstream objj;
    ofstream objjtemp;
    int roll, flag = 0;
    objj.open("storage.dat", ios::app | ios::binary);
    objjtemp.open("temp.dat", ios::app | ios::binary);

    cout << "========================================= DELETE STUDENT RECORD =========================================\n\n";
    cout << "                           enter student ROLLNO <> ";
    cin >> roll;
    while (objj.read(reinterpret_cast<char *>(&temp), sizeof(student)))
    {
        if (temp.roll != roll)
        {
            objjtemp.write(reinterpret_cast<char *>(&temp), sizeof(student));
        }
        else
        {
            flag = 1;
        }
    }
    objj.close();
    objjtemp.close();
    remove("storage.dat");
    rename("temp.dat", "storage.dat");
    if (!flag)
    {
        cout << "\n                                         no record found ";
    }
    else
    {
        cout << "\n                                         removed successfull";
    }
}