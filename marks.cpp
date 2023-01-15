#include "header.h"
void marks()
{
    student stu;
    grade get;
    ofstream markk;
    ifstream stud;
    markk.open("marks.dat", ios::out | ios ::binary);
    stud.open("storage.dat", ios ::binary);
    markk.seekp(0, ios::beg);
    while (stud.read(reinterpret_cast<char *>(&stu), sizeof(student)))
    {

        cout << "\n\nEnter marks of " << stu.name << endl
             << endl;
        strncpy(get.name, stu.name, 50);
        cout << "enter EOS marks <> ";
        cin >> get.mark[0];
        cout << "enter CAAL marks <> ";
        cin >> get.mark[1];
        cout << "enter OOPS marks <> ";
        cin >> get.mark[2];
        cout << "enter DSA marks <> ";
        cin >> get.mark[3];
        cout << "enter BE marks <> ";
        cin >> get.mark[4];

        markk.write(reinterpret_cast<char *>(&get), sizeof(grade));
    }
    markk.close();
    stud.close();
}