#include "header.h"
void result()
{
    student stu;
    grade markk;
    int roll, total = 0;
    cout << "Enter student rollno to print Marksheet <> ";
    cin >> roll;
    char name[50];
    ifstream sobj, mobj;
    sobj.open("storage.dat", ios::binary);
    mobj.open("marks.dat", ios::binary);
    system("cls");
    cout << "                    INSTITUE OF PROFESSIONAL AND EXXCELLENCE MANAGMENT " << endl;
    cout << "                             Ghazaibad , Uttar Pradesh , 201009" << endl<<endl;
    while (sobj.read(reinterpret_cast<char *>(&stu), sizeof(student)))
    {
        if (stu.roll == roll)
        {
            strncpy(name, stu.name, 50);
            cout << "      Roll no.      : " << stu.roll << "                    Date :  Jan 2023" << endl;
            cout << "      Name          : " << stu.name << endl;
            cout << "      Father Name   : " << stu.fathername << endl;
            cout << "      Date of Birth : " << stu.dob << endl;
        }
    }
    while (mobj.read(reinterpret_cast<char *>(&markk), sizeof(grade)))
    {
        if (strcmp(markk.name, name) == 0)
        {
            total = markk.mark[0] + markk.mark[1] + markk.mark[2] + markk.mark[3] + markk.mark[4];
            cout << "---------------------------------------------------------------------------------\n";
            cout << "      SUBJECTS               MARKS \n";
            cout << "---------------------------------------------------------------------------------\n";
            cout << "      EOS                    " << markk.mark[0] << endl;
            cout << "      CAAL                   " << markk.mark[2] << endl;
            cout << "      OOPS                   " << markk.mark[2] << endl;
            cout << "      DSA                    " << markk.mark[3] << endl;
            cout << "      BE                     " << markk.mark[4] << endl;
            cout << "----------------------------------------------------------------------------------\n";
            cout << "      TOTAL                  " << total << endl;
        }
    }
    if (total >= 200)
    {
        cout << "      RESULT   :    PASS " << endl;
    }
    else
    {
        cout << "      RESULT   :    FAIL " << endl;
    }
    cout << "----------------------------------------------------------------------------------\n";
    sobj.close();
    mobj.close();
}
