#include "header.h"
void loading()
{
    cout << "                                      Redirecting to Mainpage  ";
    cout.flush();
    for (int i = 0; i < 60; i++)
    {
        for (int i = 0; i < 4; i++)
        {
            cout << ".";
            cout.flush();
            Sleep(1);
        }
        cout << "\b\b\b\b    \b\b\b\b";
    }
}