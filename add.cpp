#include "header.h"
#include "exist.cpp"
void add()
{
    system("cls");
    char ch;
    fstream of;
    cout << "==================================================================================================================\n\n";
    of.open("storage.dat", ios::app | ios::binary);
    do
    {

        student check;
        bool status;
        do
        {
            cout << "enter student ROLLNO.  <>  ";
            cin >> check.roll;
            status = isExist(check.roll);
            if (status == true)
            {
                cout << "already exist";
            }
        } while (status);

        cout << "enter student NAME  <>  ";
        cin >> check.name;
        cout << "enter student FATHERNAME.  <>  ";
        cin >> check.fathername;
        cout << "enter student BLOODGROUP.  <>  ";
        cin >> check.bloodgroup;

        of.write(reinterpret_cast<char *>(&check), sizeof(student));

        cout << "press ENTER to add more or any key to EXIT \n";
        scanf("%c%*c", &ch);

    } while (ch == '\n');
    of.close();
}