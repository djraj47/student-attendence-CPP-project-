#include "header.h"
#include "loading.cpp"

#include "menu.cpp"

void login()
{
    system("cls");
    string username;
    string password;
    int choice;
    int loginattempt = 0;
    do
    {

        cout << "                                      enter your USERNAME <> ";
        cin >> username;
        cout << "                                      enter your PASSWORD <> ";
        cin >> password;
        if (username == "raj" && password == "raj1539")
        {
            cout << "                                      login successfully\n\n";
            loading();
            menu();
        }
        else
        {
            cout << "                                      invalid credentials \n                                       try again !!!";
            cout << "                                      Press any key to continue :";
            getch();
            loginattempt++;
        }
    } while (loginattempt != 3);

    cout << "                                      TO MANY LOGIN ATTEMPT !!\n";
}