#include "header.h"
#include "loading.cpp"
#include "menu.cpp"

void login()
{
    system("cls");
    char username[50];
    char pin[5];
    int choice;
    int loginattempt = 0;
    do
    {
        system("cls");
        cout << "======================================== LOGIN TO CONTINUE ========================================\n\n";
        cout << setw(60) << "enter your USERNAME <> ";
        cin >> username;
        cout << setw(60) << "enter your pin <> ";
        for (int i = 0; i < 4; i++)
        {
            pin[i] = getch();
            cout << "*";
        }
        pin[4] = '\0';
        if (strcmp(username, "raj") == 0 && strcmp(pin, "1539") == 0)
        {
            cout << endl
                 << setw(60) << "login successfully\n\n";
            loading();
            menu();
            exit(0);
        }
        else
        {
            cout << setw(60) << "\ninvalid credentials \n"
                 << setw(60) << "\ntry again !!!\n";
            cout << setw(60) << "\nPress any key to continue \n";
            getch();
            loginattempt++;
        }
    } while (loginattempt != 3);

    cout << setw(60) << "\nTO MANY LOGIN ATTEMPT !!\n";
}