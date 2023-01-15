#ifndef STUDENT
#define STUDENT

#include <iostream>
#include <fstream>
#include <conio.h>
#include <windows.h>
#include <iomanip>
#include <string>
using namespace std;

class student
{
public:
    int roll;
    char name[50];
    char fathername[50];
    char dob[15];
};
class grade
{
public:
    char name[50];
    int mark[5];
};
class atten{
    public :
    char name[50];
    int day[31][2];
};
#endif