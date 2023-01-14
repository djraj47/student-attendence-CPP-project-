#include "header.h"
bool isExist(int roll)
{
    student temp;
    ifstream objj;
    objj.open("storage.dat", ios::binary);

    if (!objj)
    {
        cout << "unable to fetch DATA";
        exit(0);
    }
    while (objj.read(reinterpret_cast<char *>(&temp), sizeof(student)))
    {
        if (temp.roll == roll)
        {
           // cout << "record exist\n";
            objj.close();
            return true;
        }
    }
    objj.close();
    return false;
}