#include "header.h"

bool sortStudents()
{
    ifstream ifobj1;
    ifobj1.open("storage.dat", ios::binary);
    student stu, stuArr[100], temp;
    int size = 0, choice;
    cout << "press < 1 > to Sort with Roll No. " << endl;
    cout << "press < 2 > to Sort with Name " << endl;
    cin >> choice;
    if (choice == 1 || choice == 2)
    {
        cout << "Sorting..." << endl;
    }
    else
    {
        cout << "pls type valid choice !" << endl;
        return false;
    }
    if (!ifobj1)
    {
        cout << "Error unable to open File !!" << endl;
        exit(0);
    }
    while (ifobj1.read(reinterpret_cast<char *>(&stu), sizeof(student)))
    {
        stuArr[size++] = stu;
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (stuArr[j].roll > stuArr[j + 1].roll && choice == 1)
            {
                temp = stuArr[j];
                stuArr[j] = stuArr[j + 1];
                stuArr[j + 1] = temp;
            }
            if (strcmp(stuArr[j].name, stuArr[j + 1].name) == 1 && choice == 2)
            {
                temp = stuArr[j];
                stuArr[j] = stuArr[j + 1];
                stuArr[j + 1] = temp;
            }
        }
    }
    cout << left << setw(30) << "Roll No." << setw(30) << "Name" << setw(30) << "fathername" << setw(30) << "date of birth" << endl;
    for (int k = 0; k < size; k++)
    {
        cout << setw(30) << stuArr[k].roll << setw(30) << stuArr[k].name << setw(30) << stuArr[k].fathername << setw(30) << stuArr[k].dob << endl;
    }

    return true;
}