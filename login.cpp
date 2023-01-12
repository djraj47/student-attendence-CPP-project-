#include "header.h"
#include "loading.cpp"
#include "menu.cpp"
void login()
{
    system("cls");
    char username[50];
    char pin[50];
    int choice;
    int loginattempt = 0;
    do
    {
        cin.ignore();
        cout << "                                      enter your USERNAME <> ";
        cin.getline(username, 50);
        cout << "                                           enter your pin <> ";
        for (int i = 0; i < 4; i++)
        {
            pin[i] = getch();
            cout << "*";
        }
        if (strcmp(username, "raj") == 0 && strcmp(pin, "1539") == 0)
        {
            cout << "\n                                      login successfully\n\n";
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