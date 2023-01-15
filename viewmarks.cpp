#include "header.h"
void viewmarks()
{
    system("cls");

    cout << "============================================== VIEW STUDENT MARKS ==============================================\n";

    ifstream objj;
    objj.open("marks.dat", ios::binary);
    grade stu;
    if (!objj)
    {
        cout << "unalbe to fetch data";
    }
    cout << left << setw(30) << "STUDENT NAME" << setw(20) << "EOS" << setw(20) << "CAAL" << setw(20) << "OOPS" << setw(20) << "DSA" << setw(20) << "BE" << endl;
    cout << "====================================================================================================================\n\n";
    while (objj.read(reinterpret_cast<char *>(&stu), sizeof(grade)))
    {
    cout << left << setw(30) << stu.name << setw(20) << stu.mark[0] << setw(20) << stu.mark[1] << setw(20) << stu.mark[2] << setw(20) << stu.mark[3] << setw(20) << stu.mark[4] << endl;
    }
    cout << "\n===================================================================================================================\n\n";
    objj.close();
}
